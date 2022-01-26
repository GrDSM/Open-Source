/*
 * Copyright (C) 2020-2022 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H
#define MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H

#include <QByteArray>

namespace multipass
{
namespace test
{
const QByteArray not_found_data{"{\"error\": \"not found\",\"error_code\": 404,\"type\": \"error\"}"};

const QByteArray post_no_error_data{"{"
                                    "\"error\": \"\","
                                    "\"error_code\": 0,"
                                    "\"metadata\": null,"
                                    "\"operation\": \"\","
                                    "\"status\": \"Success\","
                                    "\"status_code\": 200,"
                                    "\"type\": \"sync\""
                                    "}\n"};

const QByteArray project_info_data{"{"
                                   "\"error\": \"\","
                                   "\"error_code\": 0,"
                                   "\"metadata\": {"
                                   "    \"config\": {"
                                   "        \"features.images\": \"true\","
                                   "        \"features.profiles\": \"true\","
                                   "        \"features.storage.volumes\": \"true\""
                                   "    },"
                                   "    \"description\": \"Project for Multipass instances\","
                                   "    \"name\": \"multipass\","
                                   "    \"used_by\": ["
                                   "        \"/1.0/profiles/default?project=multipass\""
                                   "    ]"
                                   "},"
                                   "\"operation\": \"\","
                                   "\"status\": \"Success\","
                                   "\"status_code\": 200,"
                                   "\"type\": \"sync\""
                                   "}\n"};

const QByteArray network_info_data{"{"
                                   "\"error\": \"\","
                                   "\"error_code\": 0,"
                                   "\"metadata\": {"
                                   "    \"config\": {"
                                   "        \"ipv4.address\": \"10.241.212.1/24\","
                                   "        \"ipv4.nat\": \"true\","
                                   "        \"ipv6.address\": \"fd42:cc44:a223:7956::1/64\","
                                   "        \"ipv6.nat\": \"true\""
                                   "    },"
                                   "    \"description\": \"Network bridge for Multipass\","
                                   "    \"locations\": ["
                                   "        \"none\""
                                   "    ],"
                                   "    \"managed\": true,"
                                   "    \"name\": \"mpbr0\","
                                   "    \"status\": \"Created\","
                                   "    \"type\": \"bridge\","
                                   "    \"used_by\": ["
                                   "    ]"
                                   "},"
                                   "\"operation\": \"\","
                                   "\"status\": \"Success\","
                                   "\"status_code\": 200,"
                                   "\"type\": \"sync\""
                                   "}\n"};

const QByteArray create_vm_data{"{"
                                "\"error\": \"\","
                                "\"error_code\": 0,"
                                "\"metadata\": {"
                                "    \"class\": \"task\","
                                "    \"created_at\": \"2020-05-18T15:14:21.104580212-04:00\","
                                "    \"description\": \"Creating container\","
                                "    \"err\": \"\","
                                "    \"id\": \"0020444c-2e4c-49d5-83ed-3275e3f6d005\","
                                "    \"location\": \"none\","
                                "    \"may_cancel\": false,"
                                "    \"metadata\": null,"
                                "    \"resources\": {"
                                "        \"containers\": ["
                                "            \"/1.0/containers/pied-piper-valley\""
                                "         ],"
                                "        \"instances\": ["
                                "            \"/1.0/instances/pied-piper-valley\""
                                "         ]"
                                "     },"
                                "    \"status\": \"Running\","
                                "    \"status_code\": 103,"
                                "    \"updated_at\": \"2020-05-18T15:14:21.104580212-04:00\""
                                " },"
                                "\"operation\": \"/1.0/operations/0020444c-2e4c-49d5-83ed-3275e3f6d005\","
                                "\"status\": \"Operation created\","
                                "\"status_code\": 100,"
                                "\"type\": \"async\""
                                "}\n"};

const QByteArray create_vm_finished_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "    \"class\": \"task\","
    "    \"created_at\": \"2020-05-18T15:14:21.104580212-04:00\","
    "    \"description\": \"Creating container\","
    "    \"err\": \"\","
    "    \"id\": \"0020444c-2e4c-49d5-83ed-3275e3f6d005\","
    "    \"location\": \"none\","
    "    \"may_cancel\": false,"
    "    \"metadata\": {"
    "        \"create_instance_from_image_unpack_progress\": \"Unpack: 100% (2.18GB/s)\","
    "        \"progress\": {"
    "            \"percent\": \"100\","
    "            \"speed\": \"2184873949\","
    "            \"stage\": \"create_instance_from_image_unpack\""
    "          }"
    "      },"
    "    \"resources\": {"
    "        \"containers\": ["
    "            \"/1.0/containers/pied-piper-valley\""
    "         ],"
    "        \"instances\": ["
    "            \"/1.0/instances/pied-piper-valley\""
    "         ]"
    "     },"
    "    \"status\": \"Success\","
    "    \"status_code\": 200,"
    "    \"updated_at\": \"2020-05-18T15:14:21.104580212-04:00\""
    " },"
    "\"operation\": \"\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"sync\""
    "}\n"};

const QByteArray vm_info_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "  \"architecture\": \"x86_64\","
    "  \"config\": {"
    "    \"image.architecture\": \"amd64\","
    "    \"image.description\": \"ubuntu 18.04 LTS amd64 (release) (20200506)\","
    "    \"image.label\": \"release\","
    "    \"image.os\": \"ubuntu\","
    "    \"image.release\": \"bionic\","
    "    \"image.serial\": \"20200506\","
    "    \"image.type\": \"disk1.img\","
    "    \"image.version\": \"18.04\","
    "    \"limits.cpu\": \"2\","
    "    \"limits.memory\": \"3221225472\","
    "    \"volatile.apply_template\": \"create\","
    "    \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "    \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "    },"
    "  \"created_at\": \"2020-05-13T15:31:46.194594923-04:00\","
    "  \"description\": \"\","
    "  \"devices\": {"
    "    \"config\": {"
    "      \"source\": \"cloud-init:config\","
    "      \"type\": \"disk\""
    "      },"
    "    \"root\": {"
    "      \"path\": \"/\","
    "      \"pool\": \"default\","
    "      \"size\": \"16106127360\","
    "      \"type\": \"disk\""
    "      }"
    "    },"
    "    \"ephemeral\": false,"
    "    \"expanded_config\": {"
    "      \"image.architecture\": \"amd64\","
    "      \"image.description\": \"ubuntu 18.04 LTS amd64 (release) (20200506)\","
    "      \"image.label\": \"release\","
    "      \"image.os\": \"ubuntu\","
    "      \"image.release\": \"bionic\","
    "      \"image.serial\": \"20200506\","
    "      \"image.type\": \"disk1.img\","
    "      \"image.version\": \"18.04\","
    "      \"limits.cpu\": \"2\","
    "      \"limits.memory\": \"3221225472\","
    "      \"volatile.apply_template\": \"create\","
    "      \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "      \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "      },"
    "    \"expanded_devices\": {"
    "      \"config\": {"
    "        \"source\": \"cloud-init:config\","
    "        \"type\": \"disk\""
    "        },"
    "      \"eth0\": {"
    "        \"name\": \"eth0\","
    "        \"nictype\": \"bridged\","
    "        \"parent\": \"lxdbr0\","
    "        \"type\": \"nic\""
    "        },"
    "      \"root\": {"
    "        \"path\": \"/\","
    "        \"pool\": \"default\","
    "        \"size\": \"16106127360\","
    "        \"type\": \"disk\""
    "        }"
    "      },"
    "    \"last_used_at\": \"2020-05-13T15:34:22.934800001-04:00\","
    "    \"location\": \"none\","
    "    \"name\": \"pied-piper-valley\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"stateful\": false,"
    "    \"status\": \"Stopped\","
    "    \"status_code\": 102,"
    "    \"type\": \"virtual-machine\""
    "  },"
    "  \"operation\": \"\","
    "  \"status\": \"Success\","
    "  \"status_code\": 200,"
    "  \"type\": \"sync\""
    "}\n"};

const QByteArray vm_custom_info_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "  \"architecture\": \"x86_64\","
    "  \"config\": {"
    "    \"image.description\": \"Snapcraft builder for Core 20\","
    "    \"image.original_hash\": \"6937ddd3f4c3329182855843571fc91ae4fee24e8e0eb0f7cdcf2c22feed4dab\","
    "    \"image.os\": \"\","
    "    \"image.release\": \"snapcraft-core20\","
    "    \"image.version\": \"20200923\","
    "    \"limits.cpu\": \"2\","
    "    \"limits.memory\": \"3221225472\","
    "    \"volatile.apply_template\": \"create\","
    "    \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "    \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "    },"
    "  \"created_at\": \"2020-05-13T15:31:46.194594923-04:00\","
    "  \"description\": \"\","
    "  \"devices\": {"
    "    \"config\": {"
    "      \"source\": \"cloud-init:config\","
    "      \"type\": \"disk\""
    "      },"
    "    \"root\": {"
    "      \"path\": \"/\","
    "      \"pool\": \"default\","
    "      \"size\": \"16106127360\","
    "      \"type\": \"disk\""
    "      }"
    "    },"
    "    \"ephemeral\": false,"
    "    \"expanded_config\": {"
    "      \"image.description\": \"Snapcraft builder for Core 20\","
    "      \"image.original_hash\": \"6937ddd3f4c3329182855843571fc91ae4fee24e8e0eb0f7cdcf2c22feed4dab\","
    "      \"image.os\": \"\","
    "      \"image.release\": \"snapcraft-core20\","
    "      \"image.version\": \"20200923\","
    "      \"limits.cpu\": \"2\","
    "      \"limits.memory\": \"3221225472\","
    "      \"volatile.apply_template\": \"create\","
    "      \"volatile.base_image\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "      \"volatile.eth0.hwaddr\": \"00:16:3e:b0:c5:f4\""
    "      },"
    "    \"expanded_devices\": {"
    "      \"config\": {"
    "        \"source\": \"cloud-init:config\","
    "        \"type\": \"disk\""
    "        },"
    "      \"eth0\": {"
    "        \"name\": \"eth0\","
    "        \"nictype\": \"bridged\","
    "        \"parent\": \"lxdbr0\","
    "        \"type\": \"nic\""
    "        },"
    "      \"root\": {"
    "        \"path\": \"/\","
    "        \"pool\": \"default\","
    "        \"size\": \"16106127360\","
    "        \"type\": \"disk\""
    "        }"
    "      },"
    "    \"last_used_at\": \"2020-05-13T15:34:22.934800001-04:00\","
    "    \"location\": \"none\","
    "    \"name\": \"pied-piper-valley\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"stateful\": false,"
    "    \"status\": \"Stopped\","
    "    \"status_code\": 102,"
    "    \"type\": \"virtual-machine\""
    "  },"
    "  \"operation\": \"\","
    "  \"status\": \"Success\","
    "  \"status_code\": 200,"
    "  \"type\": \"sync\""
    "}\n"};

const QByteArray start_vm_data{"{"
                               "\"error\": \"\","
                               "\"error_code\": 0,"
                               "\"metadata\": {"
                               "  \"class\": \"task\","
                               "  \"created_at\": \"2020-05-19T11:17:20.979902453-04:00\","
                               "  \"description\": \"Starting container\","
                               "  \"err\": \"\","
                               "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                               "  \"location\": \"none\","
                               "  \"may_cancel\": false,"
                               "  \"metadata\": null,"
                               "  \"resources\": {"
                               "    \"containers\": ["
                               "      \"/1.0/containers/pied-piper-valley\""
                               "      ]"
                               "    },"
                               "  \"status\": \"Running\","
                               "  \"status_code\": 103,"
                               "  \"updated_at\": \"2020-05-19T11:17:20.979902453-04:00\""
                               "  },"
                               "\"operation\": \"/1.0/operations/b043d632-5c48-44b3-983c-a25660d61164\","
                               "\"status\": \"Operation created\","
                               "\"status_code\": 100,"
                               "\"type\": \"async\""
                               "}\n"};

const QByteArray stop_vm_data{"{"
                              "\"error\": \"\","
                              "\"error_code\": 0,"
                              "\"metadata\": {"
                              "  \"class\": \"task\","
                              "  \"created_at\": \"2020-05-19T11:17:20.979902453-04:00\","
                              "  \"description\": \"Stopping container\","
                              "  \"err\": \"\","
                              "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                              "  \"location\": \"none\","
                              "  \"may_cancel\": false,"
                              "  \"metadata\": null,"
                              "  \"resources\": {"
                              "    \"containers\": ["
                              "      \"/1.0/containers/pied-piper-valley\""
                              "      ]"
                              "    },"
                              "  \"status\": \"Running\","
                              "  \"status_code\": 103,"
                              "  \"updated_at\": \"2020-05-19T11:17:20.979902453-04:00\""
                              "  },"
                              "\"operation\": \"/1.0/operations/b043d632-5c48-44b3-983c-a25660d61164\","
                              "\"status\": \"Operation created\","
                              "\"status_code\": 100,"
                              "\"type\": \"async\""
                              "}\n"};

const QByteArray vm_state_stopped_data{"{"
                                       "\"error\": \"\","
                                       "\"error_code\": 0,"
                                       "\"metadata\": {"
                                       "  \"cpu\": {"
                                       "    \"usage\": 0"
                                       "    },"
                                       "  \"disk\": null,"
                                       "  \"memory\": {"
                                       "    \"swap_usage\": 0,"
                                       "    \"swap_usage_peak\": 0,"
                                       "    \"usage\": 0,"
                                       "    \"usage_peak\": 0"
                                       "    },"
                                       "  \"network\": null,"
                                       "  \"pid\": 0,"
                                       "  \"processes\": 0,"
                                       "  \"status\": \"Stopped\","
                                       "  \"status_code\": 102"
                                       "  },"
                                       "\"operation\": \"\","
                                       "\"status\": \"Success\","
                                       "\"status_code\": 200,"
                                       "\"type\": \"sync\""
                                       "}\n"};

const QByteArray vm_state_starting_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"cpu\": {"
                                        "    \"usage\": 0"
                                        "    },"
                                        "  \"disk\": null,"
                                        "  \"memory\": {"
                                        "    \"swap_usage\": 0,"
                                        "    \"swap_usage_peak\": 0,"
                                        "    \"usage\": 0,"
                                        "    \"usage_peak\": 0"
                                        "    },"
                                        "  \"network\": null,"
                                        "  \"pid\": 0,"
                                        "  \"processes\": 0,"
                                        "  \"status\": \"Starting\","
                                        "  \"status_code\": 106"
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray vm_state_freezing_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"cpu\": {"
                                        "    \"usage\": 0"
                                        "    },"
                                        "  \"disk\": null,"
                                        "  \"memory\": {"
                                        "    \"swap_usage\": 0,"
                                        "    \"swap_usage_peak\": 0,"
                                        "    \"usage\": 0,"
                                        "    \"usage_peak\": 0"
                                        "    },"
                                        "  \"network\": null,"
                                        "  \"pid\": 0,"
                                        "  \"processes\": 0,"
                                        "  \"status\": \"Freezing\","
                                        "  \"status_code\": 109"
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray vm_state_frozen_data{"{"
                                      "\"error\": \"\","
                                      "\"error_code\": 0,"
                                      "\"metadata\": {"
                                      "  \"cpu\": {"
                                      "    \"usage\": 0"
                                      "    },"
                                      "  \"disk\": null,"
                                      "  \"memory\": {"
                                      "    \"swap_usage\": 0,"
                                      "    \"swap_usage_peak\": 0,"
                                      "    \"usage\": 0,"
                                      "    \"usage_peak\": 0"
                                      "    },"
                                      "  \"network\": null,"
                                      "  \"pid\": 0,"
                                      "  \"processes\": 0,"
                                      "  \"status\": \"Frozen\","
                                      "  \"status_code\": 110"
                                      "  },"
                                      "\"operation\": \"\","
                                      "\"status\": \"Success\","
                                      "\"status_code\": 200,"
                                      "\"type\": \"sync\""
                                      "}\n"};

const QByteArray vm_state_error_data{"{"
                                     "\"error\": \"\","
                                     "\"error_code\": 0,"
                                     "\"metadata\": {"
                                     "  \"cpu\": {"
                                     "    \"usage\": 0"
                                     "    },"
                                     "  \"disk\": null,"
                                     "  \"memory\": {"
                                     "    \"swap_usage\": 0,"
                                     "    \"swap_usage_peak\": 0,"
                                     "    \"usage\": 0,"
                                     "    \"usage_peak\": 0"
                                     "    },"
                                     "  \"network\": null,"
                                     "  \"pid\": 0,"
                                     "  \"processes\": 0,"
                                     "  \"status\": \"Error\","
                                     "  \"status_code\": 112"
                                     "  },"
                                     "\"operation\": \"\","
                                     "\"status\": \"Success\","
                                     "\"status_code\": 200,"
                                     "\"type\": \"sync\""
                                     "}\n"};

const QByteArray vm_state_cancelling_data{"{"
                                          "\"error\": \"\","
                                          "\"error_code\": 0,"
                                          "\"metadata\": {"
                                          "  \"cpu\": {"
                                          "    \"usage\": 0"
                                          "    },"
                                          "  \"disk\": null,"
                                          "  \"memory\": {"
                                          "    \"swap_usage\": 0,"
                                          "    \"swap_usage_peak\": 0,"
                                          "    \"usage\": 0,"
                                          "    \"usage_peak\": 0"
                                          "    },"
                                          "  \"network\": null,"
                                          "  \"pid\": 0,"
                                          "  \"processes\": 0,"
                                          "  \"status\": \"Cancelling\","
                                          "  \"status_code\": 104"
                                          "  },"
                                          "\"operation\": \"\","
                                          "\"status\": \"Success\","
                                          "\"status_code\": 200,"
                                          "\"type\": \"sync\""
                                          "}\n"};

const QByteArray vm_state_other_data{"{"
                                     "\"error\": \"\","
                                     "\"error_code\": 0,"
                                     "\"metadata\": {"
                                     "  \"cpu\": {"
                                     "    \"usage\": 0"
                                     "    },"
                                     "  \"disk\": null,"
                                     "  \"memory\": {"
                                     "    \"swap_usage\": 0,"
                                     "    \"swap_usage_peak\": 0,"
                                     "    \"usage\": 0,"
                                     "    \"usage_peak\": 0"
                                     "    },"
                                     "  \"network\": null,"
                                     "  \"pid\": 0,"
                                     "  \"processes\": 0,"
                                     "  \"status\": \"Bogus\","
                                     "  \"status_code\": 115"
                                     "  },"
                                     "\"operation\": \"\","
                                     "\"status\": \"Success\","
                                     "\"status_code\": 200,"
                                     "\"type\": \"sync\""
                                     "}\n"};

const QByteArray vm_state_fully_running_data{"{"
                                             "\"error\": \"\","
                                             "\"error_code\": 0,"
                                             "\"metadata\": {"
                                             "  \"cpu\": {"
                                             "    \"usage\": 0"
                                             "    },"
                                             "  \"disk\": {"
                                             "    \"root\": {"
                                             "      \"usage\": 100352"
                                             "      }"
                                             "    },"
                                             "  \"memory\": {"
                                             "    \"swap_usage\": 0,"
                                             "    \"swap_usage_peak\": 0,"
                                             "    \"usage\": 0,"
                                             "    \"usage_peak\": 0"
                                             "    },"
                                             "  \"network\": {"
                                             "    \"eth0\": {"
                                             "      \"addresses\": ["
                                             "        {"
                                             "          \"address\": \"10.217.27.168\","
                                             "          \"family\": \"inet\","
                                             "          \"netmask\": \"24\","
                                             "          \"scope\": \"global\""
                                             "        }"
                                             "      ],"
                                             "      \"counters\": {"
                                             "        \"bytes_received\": 0,"
                                             "        \"bytes_sent\": 0,"
                                             "        \"packets_received\": 0,"
                                             "        \"packets_sent\": 0"
                                             "      },"
                                             "      \"host_name\": \"tape3019389\","
                                             "      \"hwaddr\": \"00:16:3e:13:36:01\","
                                             "      \"mtu\": 1500,"
                                             "      \"state\": \"up\","
                                             "      \"type\": \"broadcast\""
                                             "    }"
                                             "  },"
                                             "  \"pid\": 1266500,"
                                             "  \"processes\": -1,"
                                             "  \"status\": \"Running\","
                                             "  \"status_code\": 103"
                                             "  },"
                                             "\"operation\": \"\","
                                             "\"status\": \"Success\","
                                             "\"status_code\": 200,"
                                             "\"type\": \"sync\""
                                             "}\n"};

const QByteArray vm_state_partial_running_data{"{"
                                               "\"error\": \"\","
                                               "\"error_code\": 0,"
                                               "\"metadata\": {"
                                               "  \"cpu\": {"
                                               "    \"usage\": 0"
                                               "    },"
                                               "  \"disk\": null,"
                                               "  \"memory\": {"
                                               "    \"swap_usage\": 0,"
                                               "    \"swap_usage_peak\": 0,"
                                               "    \"usage\": 0,"
                                               "    \"usage_peak\": 0"
                                               "    },"
                                               "  \"network\": null,"
                                               "  \"pid\": 0,"
                                               "  \"processes\": 0,"
                                               "  \"status\": \"Running\","
                                               "  \"status_code\": 103"
                                               "  },"
                                               "\"operation\": \"\","
                                               "\"status\": \"Success\","
                                               "\"status_code\": 200,"
                                               "\"type\": \"sync\""
                                               "}\n"};

const QByteArray vm_stop_wait_task_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"class\": \"task\","
                                        "  \"created_at\": \"2020-05-20T10:22:02.684673072-04:00\","
                                        "  \"description\": \"Stopping container\","
                                        "  \"err\": \"\","
                                        "  \"id\": \"b043d632-5c48-44b3-983c-a25660d61164\","
                                        "  \"location\": \"none\","
                                        "  \"may_cancel\": false,"
                                        "  \"metadata\": null,"
                                        "  \"resources\": {"
                                        "    \"containers\": ["
                                        "      \"/1.0/containers/pied-piper-valley\""
                                        "      ]"
                                        "    },"
                                        "  \"status\": \"Success\","
                                        "  \"status_code\": 200,"
                                        "  \"updated_at\": \"2020-05-20T10:22:02.684673072-04:00\""
                                        "  },"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}\n"};

const QByteArray delete_vm_data{"{"
                                "\"error\": \"\","
                                "\"error_code\": 0,"
                                "\"metadata\": {"
                                "\"class\": \"task\","
                                "\"created_at\": \"2021-05-18T08:48:58.601160908-04:00\","
                                "\"description\": \"Deleting instance\","
                                "\"err\": \"\","
                                "\"id\": \"1c6265fc-8194-4790-9ab0-3225b0479155\","
                                "\"location\": \"none\","
                                "\"may_cancel\": false,"
                                "\"metadata\": null,"
                                "\"resources\": {"
                                "\"instances\": ["
                                "\"/1.0/instances/pied-piper-valley\""
                                "]"
                                "},"
                                "\"status\": \"Running\","
                                "\"status_code\": 103,"
                                "\"updated_at\": \"2021-05-18T08:48:58.601160908-04:00\""
                                "},"
                                "\"operation\": \"/1.0/operations/1c6265fc-8194-4790-9ab0-3225b0479155\","
                                "\"status\": \"Operation created\","
                                "\"status_code\": 100,"
                                "\"type\": \"async\""
                                "}\n"};

const QByteArray delete_vm_wait_task_data{"{"
                                          "\"error\": \"\","
                                          "\"error_code\": 0,"
                                          "\"metadata\": {"
                                          "\"class\": \"task\","
                                          "\"created_at\": \"2021-05-18T08:48:58.601160908-04:00\","
                                          "\"description\": \"Deleting instance\","
                                          "\"err\": \"\","
                                          "\"id\": \"1c6265fc-8194-4790-9ab0-3225b0479155\","
                                          "\"location\": \"none\","
                                          "\"may_cancel\": false,"
                                          "\"metadata\": null,"
                                          "\"resources\": {"
                                          "\"instances\": ["
                                          "\"/1.0/instances/pied-piper-valley\""
                                          "]"
                                          "},"
                                          "\"status\": \"Success\","
                                          "\"status_code\": 200,"
                                          "\"updated_at\": \"2021-05-18T08:48:58.601160908-04:00\""
                                          "},"
                                          "\"operation\": \"\","
                                          "\"status\": \"Success\","
                                          "\"status_code\": 200,"
                                          "\"type\": \"sync\""
                                          "}\n"};

const QByteArray network_leases_data{"{"
                                     "\"error\": \"\","
                                     "\"error_code\": 0,"
                                     "\"metadata\": ["
                                     "  {"
                                     "    \"address\": \"10.217.27.168\","
                                     "    \"hostname\": \"pied-piper-valley\","
                                     "    \"hwaddr\": \"00:16:3e:fe:f2:b9\","
                                     "    \"location\": \"none\","
                                     "    \"type\": \"dynamic\""
                                     "  }"
                                     "],"
                                     "\"operation\": \"\","
                                     "\"status\": \"Success\","
                                     "\"status_code\": 200,"
                                     "\"type\": \"sync\""
                                     "}"};

const QByteArray network_leases_data_with_others{"{"
                                                 "\"error\": \"\","
                                                 "\"error_code\": 0,"
                                                 "\"metadata\": ["
                                                 "  {"
                                                 "    \"address\": \"10.217.27.178\","
                                                 "    \"hostname\": \"foobar\","
                                                 "    \"hwaddr\": \"00:11:22:33:44:55\","
                                                 "    \"location\": \"none\","
                                                 "    \"type\": \"dynamic\""
                                                 "  },"
                                                 "  {"
                                                 "    \"address\": \"10.217.27.168\","
                                                 "    \"hostname\": \"pied-piper-valley\","
                                                 "    \"hwaddr\": \"00:16:3e:fe:f2:b9\","
                                                 "    \"location\": \"none\","
                                                 "    \"type\": \"dynamic\""
                                                 "  }"
                                                 "],"
                                                 "\"operation\": \"\","
                                                 "\"status\": \"Success\","
                                                 "\"status_code\": 200,"
                                                 "\"type\": \"sync\""
                                                 "}"};

const QByteArray network_leases_data_with_ipv6{"{"
                                               "\"error\": \"\","
                                               "\"error_code\": 0,"
                                               "\"metadata\": ["
                                               "  {"
                                               "    \"address\": \"fd42:3454:f77b:1a3e:5054:ff:fefc:b7fb\","
                                               "    \"hostname\": \"pied-piper-valley\","
                                               "    \"hwaddr\": \"00:16:3e:fe:f2:b9\","
                                               "    \"location\": \"none\","
                                               "    \"type\": \"dynamic\""
                                               "  },"
                                               "  {"
                                               "    \"address\": \"10.217.27.168\","
                                               "    \"hostname\": \"pied-piper-valley\","
                                               "    \"hwaddr\": \"00:16:3e:fe:f2:b9\","
                                               "    \"location\": \"none\","
                                               "    \"type\": \"dynamic\""
                                               "  }"
                                               "],"
                                               "\"operation\": \"\","
                                               "\"status\": \"Success\","
                                               "\"status_code\": 200,"
                                               "\"type\": \"sync\""
                                               "}"};

const QByteArray network_no_leases_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": ["
                                        "],"
                                        "\"operation\": \"\","
                                        "\"status\": \"Success\","
                                        "\"status_code\": 200,"
                                        "\"type\": \"sync\""
                                        "}"};

const QByteArray lxd_server_info_data{"{"
                                      "\"type\": \"sync\","
                                      "\"status\": \"Success\","
                                      "\"status_code\": 200,"
                                      "\"operation\": \"\","
                                      "\"error_code\": 0,"
                                      "\"error\": \"\","
                                      "\"metadata\": {"
                                      "  \"config\": {},"
                                      "  \"api_extensions\": ["
                                      "  ],"
                                      "  \"api_status\": \"stable\","
                                      "  \"api_version\": \"1.0\","
                                      "  \"auth\": \"trusted\","
                                      "  \"public\": false,"
                                      "  \"auth_methods\": ["
                                      "    \"tls\""
                                      "  ],"
                                      "  \"environment\": {"
                                      "    \"addresses\": [],"
                                      "    \"architectures\": ["
                                      "      \"x86_64\","
                                      "      \"i686\""
                                      "    ],"
                                      "    \"certificate\": \"\n\","
                                      "    \"certificate_fingerprint\": \"\","
                                      "    \"driver\": \"lxc\","
                                      "    \"driver_version\": \"4.0.2\","
                                      "    \"firewall\": \"xtables\","
                                      "    \"kernel\": \"Linux\","
                                      "    \"kernel_architecture\": \"x86_64\","
                                      "    \"kernel_features\": {"
                                      "      \"netnsid_getifaddrs\": \"true\","
                                      "      \"seccomp_listener\": \"true\","
                                      "      \"seccomp_listener_continue\": \"true\","
                                      "      \"shiftfs\": \"false\","
                                      "      \"uevent_injection\": \"true\","
                                      "      \"unpriv_fscaps\": \"true\""
                                      "    },"
                                      "    \"kernel_version\": \"5.4.0-31-generic\","
                                      "    \"lxc_features\": {"
                                      "      \"cgroup2\": \"true\","
                                      "      \"mount_injection_file\": \"true\","
                                      "      \"network_gateway_device_route\": \"true\","
                                      "      \"network_ipvlan\": \"true\","
                                      "      \"network_l2proxy\": \"true\","
                                      "      \"network_phys_macvlan_mtu\": \"true\","
                                      "      \"network_veth_router\": \"true\","
                                      "      \"pidfd\": \"true\","
                                      "      \"seccomp_notify\": \"true\""
                                      "      },"
                                      "    \"os_name\": \"Ubuntu\","
                                      "    \"os_version\": \"20.04\","
                                      "    \"project\": \"default\","
                                      "    \"server\": \"lxd\","
                                      "    \"server_clustered\": false,"
                                      "    \"server_name\": \"shady\","
                                      "    \"server_pid\": 842930,"
                                      "    \"server_version\": \"4.1\","
                                      "    \"storage\": \"zfs\","
                                      "    \"storage_version\": \"0.8.3-1ubuntu12\""
                                      "    }"
                                      "  }"
                                      "}"};

const QByteArray image_info_data{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": ["
    "  {"
    "    \"auto_update\": false,"
    "    \"properties\": {"
    "      \"architecture\": \"amd64\","
    "      \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "      \"label\": \"release\","
    "      \"os\": \"ubuntu\","
    "      \"release\": \"bionic\","
    "      \"serial\": \"20200519.1\","
    "      \"type\": \"disk1.img\","
    "      \"version\": \"18.04\","
    "      \"query.release\": \"bionic\","
    "      \"query.remote\": \"\""
    "      },"
    "    \"public\": false,"
    "    \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"aliases\": [],"
    "    \"architecture\": \"x86_64\","
    "    \"cached\": false,"
    "    \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "    \"fingerprint\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "    \"size\": 345572108,"
    "    \"type\": \"virtual-machine\","
    "    \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "    \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\","
    "    \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "  },"
    "  {"
    "    \"auto_update\": false,"
    "    \"properties\": {"
    "      \"description\": \"Snapcraft builder for Core 20\","
    "      \"original_hash\": \"c14a2047c6ba57722bc612115b1d44bea4a29ac2212fcc0628c49aa832dba867\","
    "      \"os\": \"ubuntu\","
    "      \"release\": \"snapcraft-core20\","
    "      \"version\": \"20200901\""
    "      },"
    "    \"public\": false,"
    "    \"expires_at\": \"1969-12-31T19:00:00-05:00\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"aliases\": [],"
    "    \"architecture\": \"x86_64\","
    "    \"cached\": false,"
    "    \"filename\": \"ubuntu-20.04-minimal-cloudimg-amd64.img\","
    "    \"fingerprint\": \"da708063589b9c83dfeaec7049deac82da96f8969b413d1346dc067897e5934b\","
    "    \"size\": 209004544,"
    "    \"type\": \"virtual-machine\","
    "    \"created_at\": \"2020-09-03T14:35:38-04:00\","
    "    \"last_used_at\": \"2020-09-03T14:35:39.704314884-04:00\","
    "    \"uploaded_at\": \"2020-09-03T14:35:39.63307276-04:00\""
    "    }"
    "  ]"
    "}"};

const QByteArray normal_image_info_data{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": {"
    "  \"auto_update\": false,"
    "  \"properties\": {"
    "    \"architecture\": \"amd64\","
    "    \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "    \"label\": \"release\","
    "    \"os\": \"ubuntu\","
    "    \"release\": \"bionic\","
    "    \"serial\": \"20200519.1\","
    "    \"type\": \"disk1.img\","
    "    \"version\": \"18.04\""
    "    },"
    "  \"public\": false,"
    "  \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "  \"profiles\": ["
    "    \"default\""
    "    ],"
    "  \"aliases\": [],"
    "  \"architecture\": \"x86_64\","
    "  \"cached\": false,"
    "  \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "  \"fingerprint\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "  \"size\": 345572108,"
    "  \"type\": \"virtual-machine\","
    "  \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "  \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\","
    "  \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "  }"
    "}"};

const QByteArray large_image_info_data{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": {"
    "  \"auto_update\": false,"
    "  \"properties\": {"
    "    \"architecture\": \"amd64\","
    "    \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "    \"label\": \"release\","
    "    \"os\": \"ubuntu\","
    "    \"release\": \"bionic\","
    "    \"serial\": \"20200519.1\","
    "    \"type\": \"disk1.img\","
    "    \"version\": \"18.04\""
    "    },"
    "  \"public\": false,"
    "  \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "  \"profiles\": ["
    "    \"default\""
    "    ],"
    "  \"aliases\": [],"
    "  \"architecture\": \"x86_64\","
    "  \"cached\": false,"
    "  \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "  \"fingerprint\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "  \"size\": 33345572108,"
    "  \"type\": \"virtual-machine\","
    "  \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "  \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\","
    "  \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "  }"
    "}"};

const QByteArray image_info_unused_updated_image{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": ["
    "  {"
    "    \"auto_update\": false,"
    "    \"properties\": {"
    "      \"architecture\": \"amd64\","
    "      \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "      \"label\": \"release\","
    "      \"os\": \"ubuntu\","
    "      \"release\": \"bionic\","
    "      \"serial\": \"20200519.1\","
    "      \"type\": \"disk1.img\","
    "      \"version\": \"18.04\","
    "      \"query.release\": \"bionic\","
    "      \"query.remote\": \"\","
    "      \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\""
    "      },"
    "    \"public\": false,"
    "    \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"aliases\": [],"
    "    \"architecture\": \"x86_64\","
    "    \"cached\": false,"
    "    \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "    \"fingerprint\": \"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855\","
    "    \"size\": 345572108,"
    "    \"type\": \"virtual-machine\","
    "    \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "    \"last_used_at\": \"0001-01-01T00:00:00Z\","
    "    \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "    }"
    "  ]"
    "}"};

const QByteArray image_download_task_data{"{"
                                          "\"error\": \"\","
                                          "\"error_code\": 0,"
                                          "\"metadata\": {"
                                          "    \"class\": \"task\","
                                          "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
                                          "    \"description\": \"Downloading image\","
                                          "    \"err\": \"\","
                                          "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                          "    \"location\": \"none\","
                                          "    \"may_cancel\": false,"
                                          "    \"metadata\": null,"
                                          "    \"resources\": null,"
                                          "    \"status\": \"Running\","
                                          "    \"status_code\": 103,"
                                          "    \"updated_at\": \"2020-06-09T16:30:04.381432577-04:00\""
                                          "  },"
                                          "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                          "\"status\": \"Operation created\","
                                          "\"status_code\": 100,"
                                          "\"type\": \"async\""
                                          "}"};

const QByteArray image_downloading_task_data{"{"
                                             "\"error\": \"\","
                                             "\"error_code\": 0,"
                                             "\"metadata\": {"
                                             "    \"class\": \"task\","
                                             "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
                                             "    \"description\": \"Downloading image\","
                                             "    \"err\": \"\","
                                             "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                             "    \"location\": \"none\","
                                             "    \"may_cancel\": true,"
                                             "    \"metadata\": {"
                                             "        \"download_progress\": \"rootfs: 25% (4.95MB/s)\""
                                             "      },"
                                             "    \"resources\": null,"
                                             "    \"status\": \"Running\","
                                             "    \"status_code\": 103,"
                                             "    \"updated_at\": \"2020-06-09T16:34:06.381754577-04:00\""
                                             "  },"
                                             "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
                                             "\"status\": \"Success\","
                                             "\"status_code\": 200,"
                                             "\"type\": \"async\""
                                             "}"};

const QByteArray image_download_task_complete{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "  \"class\": \"task\","
    "  \"created_at\": \"2020-09-09T15:16:03.185557772-04:00\","
    "  \"description\": \"Downloading image\","
    "  \"err\": \"\","
    "  \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
    "  \"location\": \"none\","
    "  \"may_cancel\": false,"
    "  \"metadata\": {"
    "    \"fingerprint\": \"aedb5a84aaf2e4e443e090511156366a2800c26cec1b6a46f44d153c4bf04205\","
    "    \"size\": \"209004544\""
    "    },"
    "  \"resources\": null,"
    "  \"status\": \"Success\","
    "  \"status_code\": 200,"
    "  \"updated_at\": \"2020-09-09T15:16:03.880393648-04:00\""
    "  },"
    "\"operation\": \"\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"sync\""
    "}"};

const QByteArray metadata_downloading_task_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "    \"class\": \"task\","
    "    \"created_at\": \"2020-06-09T16:30:04.381432577-04:00\","
    "    \"description\": \"Downloading image\","
    "    \"err\": \"\","
    "    \"id\": \"0a19a412-03d0-4118-bee8-a3095f06d4da\","
    "    \"location\": \"none\","
    "    \"may_cancel\": true,"
    "    \"metadata\": {"
    "        \"download_progress\": \"metadata: 100% (4.95MB/s)\""
    "      },"
    "    \"resources\": null,"
    "    \"status\": \"Running\","
    "    \"status_code\": 103,"
    "    \"updated_at\": \"2020-06-09T16:34:06.381754577-04:00\""
    "  },"
    "\"operation\": \"/1.0/operations/0a19a412-03d0-4118-bee8-a3095f06d4da\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"async\""
    "}"};

const QByteArray image_info_update_source_info{
    "{"
    "\"type\": \"sync\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"operation\": \"\","
    "\"error_code\": 0,"
    "\"error\": \"\","
    "\"metadata\": ["
    "  {"
    "    \"auto_update\": false,"
    "    \"properties\": {"
    "      \"architecture\": \"amd64\","
    "      \"description\": \"ubuntu 18.04 LTS amd64 (release) (20200519.1)\","
    "      \"label\": \"release\","
    "      \"os\": \"ubuntu\","
    "      \"release\": \"bionic\","
    "      \"serial\": \"20200519.1\","
    "      \"type\": \"disk1.img\","
    "      \"version\": \"18.04\","
    "      \"query.release\": \"bionic\","
    "      \"query.remote\": \"\""
    "      },"
    "    \"public\": false,"
    "    \"expires_at\": \"2023-04-25T20:00:00-04:00\","
    "    \"profiles\": ["
    "      \"default\""
    "      ],"
    "    \"aliases\": [],"
    "    \"architecture\": \"x86_64\","
    "    \"cached\": false,"
    "    \"filename\": \"ubuntu-18.04-server-cloudimg-amd64-lxd.tar.xz\","
    "    \"fingerprint\": \"aedb5a84aaf2e4e443e090511156366a2800c26cec1b6a46f44d153c4bf04205\","
    "    \"size\": 345572108,"
    "    \"update_source\": {"
    "      \"alias\": \"bionic\","
    "      \"certificate\": \"\","
    "      \"protocol\": \"simplestreams\","
    "      \"server\": \"https://cloud-images.ubuntu.com/releases/\","
    "      \"image_type\": \"\""
    "      },"
    "    \"type\": \"virtual-machine\","
    "    \"created_at\": \"2020-05-18T20:00:00-04:00\","
    "    \"last_used_at\": \"2020-06-04T14:25:42.334466315-04:00\","
    "    \"uploaded_at\": \"2020-06-04T14:25:41.622958476-04:00\""
    "    }"
    "  ]"
    "}"};

const QByteArray image_delete_task_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"id\": \"a8aa52ed-f15f-40d5-8159-dc7640c1761e\","
                                        "  \"class\": \"task\","
                                        "  \"description\": \"Deleting image\","
                                        "  \"created_at\": \"2020-07-06T14:14:15.861352463-04:00\","
                                        "  \"updated_at\": \"2020-07-06T14:14:15.861352463-04:00\","
                                        "  \"status\": \"Running\","
                                        "  \"status_code\": 103,"
                                        "  \"resources\": {"
                                        "    \"images\": ["
                                        "      \"/1.0/images/468333262bdc\""
                                        "      ]"
                                        "    },"
                                        "  \"metadata\": null,"
                                        "  \"may_cancel\": false,"
                                        "  \"err\": \"\","
                                        "  \"location\": \"none\""
                                        "  },"
                                        "\"operation\": \"/1.0/operations/a8aa52ed-f15f-40d5-8159-dc7640c1761e\","
                                        "\"status\": \"Operation created\","
                                        "\"status_code\": 100,"
                                        "\"type\": \"async\""
                                        "}"};

const QByteArray image_upload_task_data{"{"
                                        "\"error\": \"\","
                                        "\"error_code\": 0,"
                                        "\"metadata\": {"
                                        "  \"class\": \"task\","
                                        "  \"created_at\": \"2020-09-09T15:16:03.185557772-04:00\","
                                        "  \"description\": \"Downloading image\","
                                        "  \"err\": \"\","
                                        "  \"id\": \"dcce4fda-aab9-4117-89c1-9f42b8e3f4a8\","
                                        "  \"location\": \"none\","
                                        "  \"may_cancel\": false,"
                                        "  \"metadata\": null,"
                                        "  \"resources\": null,"
                                        "  \"status\": \"Running\","
                                        "  \"status_code\": 103,"
                                        "  \"updated_at\": \"2020-09-09T15:16:03.185557772-04:00\""
                                        "  },"
                                        "\"operation\": \"/1.0/operations/dcce4fda-aab9-4117-89c1-9f42b8e3f4a8\","
                                        "\"status\": \"Operation created\","
                                        "\"status_code\": 100,"
                                        "\"type\": \"async\""
                                        "}"};

const QByteArray image_upload_task_complete_data{
    "{"
    "\"error\": \"\","
    "\"error_code\": 0,"
    "\"metadata\": {"
    "  \"class\": \"task\","
    "  \"created_at\": \"2020-09-09T15:16:03.185557772-04:00\","
    "  \"description\": \"Downloading image\","
    "  \"err\": \"\","
    "  \"id\": \"dcce4fda-aab9-4117-89c1-9f42b8e3f4a8\","
    "  \"location\": \"none\","
    "  \"may_cancel\": false,"
    "  \"metadata\": {"
    "    \"fingerprint\": \"bc5a973bd6f2bef30658fb51177cf5e506c1d60958a4c97813ee26416dc368da\","
    "    \"size\": \"209004544\""
    "    },"
    "  \"resources\": null,"
    "  \"status\": \"Success\","
    "  \"status_code\": 200,"
    "  \"updated_at\": \"2020-09-09T15:16:03.880393648-04:00\""
    "  },"
    "\"operation\": \"\","
    "\"status\": \"Success\","
    "\"status_code\": 200,"
    "\"type\": \"sync\""
    "}"};

const QByteArray networks_empty_data{R"(
{
     "type": "sync",
     "status": "Success",
     "status_code": 200,
     "operation": "",
     "error_code": 0,
     "error": "",
     "metadata": []
})"};

const QByteArray networks_realistic_data{R"(
{
    "type": "sync",
    "status": "Success",
    "status_code": 200,
    "operation": "",
    "error_code": 0,
    "error": "",
    "metadata": [
        {
            "config": {
                "ipv4.address": "10.48.127.1/24",
                "ipv4.nat": "true",
                "ipv6.address": "fd42:f933:79c:618f::1/64",
                "ipv6.nat": "true"
            },
            "description": "",
            "name": "lxdbr0",
            "type": "bridge",
            "used_by": [
                "/1.0/profiles/default"
            ],
            "managed": true,
            "status": "Created",
            "locations": [
                "none"
            ]
        },
        {
            "config": {
                "ipv4.address": "10.186.122.1/24",
                "ipv4.nat": "true",
                "ipv6.address": "fd42:3d5d:5553:7fc8::1/64",
                "ipv6.nat": "true"
            },
            "description": "Network bridge for Multipass",
            "name": "mpbr0",
            "type": "bridge",
            "used_by": [
                "/1.0/profiles/default?project=multipass"
            ],
            "managed": true,
            "status": "Created",
            "locations": [
                "none"
            ]
        },
        {
            "config": {},
            "description": "",
            "name": "lo",
            "type": "loopback",
            "used_by": [],
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "wlp2s0",
            "type": "physical",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "virbr0",
            "type": "bridge",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "virbr0-nic",
            "type": "unknown",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "enxe4b97a832426",
            "type": "physical",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "mpqemubr0-dummy",
            "type": "unknown",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "mpqemubr0",
            "type": "bridge",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        },
        {
            "config": {},
            "description": "",
            "name": "tap-a1a0e5e916d",
            "type": "unknown",
            "used_by": null,
            "managed": false,
            "status": "",
            "locations": null
        }
    ]
})"};

const QByteArray networks_faulty_data{R"(
{
    "status": "Success",
    "status_code": 200,
    "nonsense": "field",
    "metadata": [
        {
            "type": "bridge",
            "but": "noname"
        },
        {
            "name": "virbr0",
            "type": "bridge"
        },
        {
            "name": "enxe4b97a832426",
            "type": "physical"
        },
        {
            "name": "",
            "type": "bridge",
            "but": "empty name"
        },
        {
            "name": "bla",
            "but": "notype"
        },
        {
            "name": "en0",
            "type": "physical"
        },
        {
            "name": "lxdbr0",
            "type": "bridge"
        },
        {
            "name": 123,
            "type": "bridge"
        },
        {
            "name": "eth0",
            "type": 123
        },
        {
            "name": "mpbr0",
            "type": "bridge"
        },
        {
            "name": "mpqemubr0",
            "type": "bridge"
        },
        {
            "name": "blahh",
            "type": "unknown"
        }
    ]
})"};

} // namespace test
} // namespace multipass

#endif // MULTIPASS_MOCK_LXD_SERVER_RESPONSES_H
