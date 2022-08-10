set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_1_0_V_V int 16 regular {axi_s 0 volatile  { input_1_0_V_V Data } }  }
	{ input_1_1_V_V int 16 regular {axi_s 0 volatile  { input_1_1_V_V Data } }  }
	{ input_1_2_V_V int 16 regular {axi_s 0 volatile  { input_1_2_V_V Data } }  }
	{ input_1_3_V_V int 16 regular {axi_s 0 volatile  { input_1_3_V_V Data } }  }
	{ input_1_4_V_V int 16 regular {axi_s 0 volatile  { input_1_4_V_V Data } }  }
	{ input_1_5_V_V int 16 regular {axi_s 0 volatile  { input_1_5_V_V Data } }  }
	{ input_1_6_V_V int 16 regular {axi_s 0 volatile  { input_1_6_V_V Data } }  }
	{ input_1_7_V_V int 16 regular {axi_s 0 volatile  { input_1_7_V_V Data } }  }
	{ layer2_out_0_V_V int 16 regular {axi_s 1 volatile  { layer2_out_0_V_V Data } }  }
	{ layer2_out_1_V_V int 16 regular {axi_s 1 volatile  { layer2_out_1_V_V Data } }  }
	{ layer2_out_2_V_V int 16 regular {axi_s 1 volatile  { layer2_out_2_V_V Data } }  }
	{ layer2_out_3_V_V int 16 regular {axi_s 1 volatile  { layer2_out_3_V_V Data } }  }
	{ layer2_out_4_V_V int 16 regular {axi_s 1 volatile  { layer2_out_4_V_V Data } }  }
	{ layer2_out_5_V_V int 16 regular {axi_s 1 volatile  { layer2_out_5_V_V Data } }  }
	{ layer2_out_6_V_V int 16 regular {axi_s 1 volatile  { layer2_out_6_V_V Data } }  }
	{ layer2_out_7_V_V int 16 regular {axi_s 1 volatile  { layer2_out_7_V_V Data } }  }
	{ const_size_in_1 int 16 regular {pointer 1}  }
	{ const_size_out_1 int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_1_0_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_1_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_2_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_3_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_4_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_5_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_6_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_7_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_0_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_1_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_2_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_3_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_4_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_5_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_6_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_7_V_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "const_size_in_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_in_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "const_size_out_1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "const_size_out_1","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 58
set portList { 
	{ input_1_0_V_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ input_1_1_V_V_TDATA sc_in sc_lv 16 signal 1 } 
	{ input_1_2_V_V_TDATA sc_in sc_lv 16 signal 2 } 
	{ input_1_3_V_V_TDATA sc_in sc_lv 16 signal 3 } 
	{ input_1_4_V_V_TDATA sc_in sc_lv 16 signal 4 } 
	{ input_1_5_V_V_TDATA sc_in sc_lv 16 signal 5 } 
	{ input_1_6_V_V_TDATA sc_in sc_lv 16 signal 6 } 
	{ input_1_7_V_V_TDATA sc_in sc_lv 16 signal 7 } 
	{ layer2_out_0_V_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer2_out_1_V_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer2_out_2_V_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ layer2_out_3_V_V_TDATA sc_out sc_lv 16 signal 11 } 
	{ layer2_out_4_V_V_TDATA sc_out sc_lv 16 signal 12 } 
	{ layer2_out_5_V_V_TDATA sc_out sc_lv 16 signal 13 } 
	{ layer2_out_6_V_V_TDATA sc_out sc_lv 16 signal 14 } 
	{ layer2_out_7_V_V_TDATA sc_out sc_lv 16 signal 15 } 
	{ const_size_in_1 sc_out sc_lv 16 signal 16 } 
	{ const_size_out_1 sc_out sc_lv 16 signal 17 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ const_size_in_1_ap_vld sc_out sc_logic 1 outvld 16 } 
	{ const_size_out_1_ap_vld sc_out sc_logic 1 outvld 17 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ input_1_0_V_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ input_1_0_V_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ input_1_1_V_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ input_1_1_V_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_1_2_V_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ input_1_2_V_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ input_1_3_V_V_TVALID sc_in sc_logic 1 invld 3 } 
	{ input_1_3_V_V_TREADY sc_out sc_logic 1 inacc 3 } 
	{ input_1_4_V_V_TVALID sc_in sc_logic 1 invld 4 } 
	{ input_1_4_V_V_TREADY sc_out sc_logic 1 inacc 4 } 
	{ input_1_5_V_V_TVALID sc_in sc_logic 1 invld 5 } 
	{ input_1_5_V_V_TREADY sc_out sc_logic 1 inacc 5 } 
	{ input_1_6_V_V_TVALID sc_in sc_logic 1 invld 6 } 
	{ input_1_6_V_V_TREADY sc_out sc_logic 1 inacc 6 } 
	{ input_1_7_V_V_TVALID sc_in sc_logic 1 invld 7 } 
	{ input_1_7_V_V_TREADY sc_out sc_logic 1 inacc 7 } 
	{ layer2_out_0_V_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer2_out_0_V_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer2_out_1_V_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer2_out_1_V_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer2_out_2_V_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer2_out_2_V_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ layer2_out_3_V_V_TVALID sc_out sc_logic 1 outvld 11 } 
	{ layer2_out_3_V_V_TREADY sc_in sc_logic 1 outacc 11 } 
	{ layer2_out_4_V_V_TVALID sc_out sc_logic 1 outvld 12 } 
	{ layer2_out_4_V_V_TREADY sc_in sc_logic 1 outacc 12 } 
	{ layer2_out_5_V_V_TVALID sc_out sc_logic 1 outvld 13 } 
	{ layer2_out_5_V_V_TREADY sc_in sc_logic 1 outacc 13 } 
	{ layer2_out_6_V_V_TVALID sc_out sc_logic 1 outvld 14 } 
	{ layer2_out_6_V_V_TREADY sc_in sc_logic 1 outacc 14 } 
	{ layer2_out_7_V_V_TVALID sc_out sc_logic 1 outvld 15 } 
	{ layer2_out_7_V_V_TREADY sc_in sc_logic 1 outacc 15 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "input_1_0_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_0_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_1_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_1_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_2_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_2_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_3_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_3_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_4_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_4_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_5_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_5_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_6_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_6_V_V", "role": "TDATA" }} , 
 	{ "name": "input_1_7_V_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_7_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_0_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_0_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_1_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_1_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_2_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_2_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_3_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_3_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_4_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_4_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_5_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_5_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_6_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_6_V_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_7_V_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_7_V_V", "role": "TDATA" }} , 
 	{ "name": "const_size_in_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_in_1", "role": "default" }} , 
 	{ "name": "const_size_out_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "const_size_out_1", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "const_size_in_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_in_1", "role": "ap_vld" }} , 
 	{ "name": "const_size_out_1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "const_size_out_1", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "input_1_0_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_0_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_0_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_0_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_1_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_1_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_1_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_1_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_2_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_2_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_2_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_2_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_3_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_3_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_3_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_3_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_4_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_4_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_4_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_4_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_5_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_5_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_5_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_5_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_6_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_6_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_6_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_6_V_V", "role": "TREADY" }} , 
 	{ "name": "input_1_7_V_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_7_V_V", "role": "TVALID" }} , 
 	{ "name": "input_1_7_V_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_7_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_0_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_0_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_0_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_0_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_1_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_1_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_1_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_1_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_2_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_2_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_2_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_2_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_3_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_3_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_3_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_3_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_4_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_4_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_4_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_4_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_5_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_5_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_5_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_5_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_6_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_6_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_6_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_6_V_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_7_V_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_7_V_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_7_V_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_7_V_V", "role": "TREADY" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "11", "54", "55", "56", "57", "58", "59", "60", "61", "62"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "103", "EstimateLatencyMax" : "1978",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0", "ReadyCount" : "Block_proc_U0_ap_ready_count"},
			{"ID" : "2", "Name" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "ReadyCount" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "Block_proc_U0"},
			{"ID" : "11", "Name" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0"}],
		"Port" : [
			{"Name" : "input_1_0_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_0_V_V"}]},
			{"Name" : "input_1_1_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_1_V_V"}]},
			{"Name" : "input_1_2_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_2_V_V"}]},
			{"Name" : "input_1_3_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_3_V_V"}]},
			{"Name" : "input_1_4_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_4_V_V"}]},
			{"Name" : "input_1_5_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_5_V_V"}]},
			{"Name" : "input_1_6_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_6_V_V"}]},
			{"Name" : "input_1_7_V_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Port" : "data_7_V_V"}]},
			{"Name" : "layer2_out_0_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_0_V_V"}]},
			{"Name" : "layer2_out_1_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_1_V_V"}]},
			{"Name" : "layer2_out_2_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_2_V_V"}]},
			{"Name" : "layer2_out_3_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_3_V_V"}]},
			{"Name" : "layer2_out_4_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_4_V_V"}]},
			{"Name" : "layer2_out_5_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_5_V_V"}]},
			{"Name" : "layer2_out_6_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_6_V_V"}]},
			{"Name" : "layer2_out_7_V_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "res_7_V_V"}]},
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_in_1"}]},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Block_proc_U0", "Port" : "const_size_out_1"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_V"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "sX"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "sY"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "pY"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "pX"}]},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Port" : "w2_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Block_proc_U0", "Parent" : "0",
		"CDFG" : "Block_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "const_size_in_1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "const_size_out_1", "Type" : "Vld", "Direction" : "O"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10"],
		"CDFG" : "zeropad2d_cl_me_ap_fixed_ap_fixed_config4_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "28", "EstimateLatencyMax" : "28",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_0_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_1_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_1_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_2_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_2_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_3_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_3_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_4_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_4_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_5_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_5_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_6_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_6_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_7_V_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_7_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_0_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "res_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "res_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_2_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "res_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_3_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "res_3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_4_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "res_4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_5_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "res_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_6_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "res_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_7_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "61",
				"BlockSignal" : [
					{"Name" : "res_7_V_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_0_V_V_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_1_V_V_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_2_V_V_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_3_V_V_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_4_V_V_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_5_V_V_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_6_V_V_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_me_ap_fixed_ap_fixed_config4_U0.regslice_both_data_7_V_V_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0", "Parent" : "0", "Child" : ["12", "13", "30", "32", "34", "36", "38", "40", "42", "44", "46", "47", "48", "49", "50", "51", "52", "53"],
		"CDFG" : "conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "101", "EstimateLatencyMax" : "1976",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "2",
		"StartFifo" : "start_for_conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_conrcU_U",
		"Port" : [
			{"Name" : "data_0_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "data_0_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_1_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "data_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_2_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "data_2_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_3_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "data_3_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_4_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "data_4_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_5_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "data_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_6_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "data_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_7_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "2", "DependentChan" : "61",
				"BlockSignal" : [
					{"Name" : "data_7_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_0_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_0_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_1_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_1_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_2_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_2_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_3_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_3_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_4_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_4_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_5_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_5_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_6_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_6_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_7_V_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_7_V_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.w2_V_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551", "Parent" : "11", "Child" : ["14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29"],
		"CDFG" : "cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_0_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_0_U", "Parent" : "13"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_1_U", "Parent" : "13"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_1_U", "Parent" : "13"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_2_U", "Parent" : "13"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_2_U", "Parent" : "13"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_3_U", "Parent" : "13"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_3_U", "Parent" : "13"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_4_U", "Parent" : "13"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_4_U", "Parent" : "13"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_5_U", "Parent" : "13"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_5_U", "Parent" : "13"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_6_U", "Parent" : "13"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_6_U", "Parent" : "13"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_0_7_U", "Parent" : "13"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_551.layer_in_row_Array_V_1_7_U", "Parent" : "13"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_590", "Parent" : "11", "Child" : ["31"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_590.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "30"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_596", "Parent" : "11", "Child" : ["33"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_596.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "32"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_602", "Parent" : "11", "Child" : ["35"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_602.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_608", "Parent" : "11", "Child" : ["37"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_608.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_614", "Parent" : "11", "Child" : ["39"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_614.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "38"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_620", "Parent" : "11", "Child" : ["41"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_620.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "40"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_626", "Parent" : "11", "Child" : ["43"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_626.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "42"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_632", "Parent" : "11", "Child" : ["45"],
		"CDFG" : "product_dense_ap_fixed_ap_fixed_ap_fixed_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.op_V_assign_2_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_632.myproject_mul_mul_16s_16s_18_1_1_U23", "Parent" : "44"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_0_V_V_U", "Parent" : "11"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_1_V_V_U", "Parent" : "11"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_2_V_V_U", "Parent" : "11"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_3_V_V_U", "Parent" : "11"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_4_V_V_U", "Parent" : "11"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_5_V_V_U", "Parent" : "11"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_6_V_V_U", "Parent" : "11"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_U0.regslice_both_res_7_V_V_U", "Parent" : "11"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_0_V_V_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_1_V_V_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_2_V_V_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_3_V_V_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_4_V_V_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_5_V_V_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_6_V_V_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_7_V_V_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_conrcU_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		input_1_0_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_1_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_2_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_3_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_4_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_5_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_6_V_V {Type I LastRead 3 FirstWrite -1}
		input_1_7_V_V {Type I LastRead 3 FirstWrite -1}
		layer2_out_0_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_1_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_2_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_3_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_4_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_5_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_6_V_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_7_V_V {Type O LastRead -1 FirstWrite 4}
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}
		layer_in_V {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	Block_proc {
		const_size_in_1 {Type O LastRead -1 FirstWrite 0}
		const_size_out_1 {Type O LastRead -1 FirstWrite 0}}
	zeropad2d_cl_me_ap_fixed_ap_fixed_config4_s {
		data_0_V_V {Type I LastRead 3 FirstWrite -1}
		data_1_V_V {Type I LastRead 3 FirstWrite -1}
		data_2_V_V {Type I LastRead 3 FirstWrite -1}
		data_3_V_V {Type I LastRead 3 FirstWrite -1}
		data_4_V_V {Type I LastRead 3 FirstWrite -1}
		data_5_V_V {Type I LastRead 3 FirstWrite -1}
		data_6_V_V {Type I LastRead 3 FirstWrite -1}
		data_7_V_V {Type I LastRead 3 FirstWrite -1}
		res_0_V_V {Type O LastRead -1 FirstWrite 1}
		res_1_V_V {Type O LastRead -1 FirstWrite 1}
		res_2_V_V {Type O LastRead -1 FirstWrite 1}
		res_3_V_V {Type O LastRead -1 FirstWrite 1}
		res_4_V_V {Type O LastRead -1 FirstWrite 1}
		res_5_V_V {Type O LastRead -1 FirstWrite 1}
		res_6_V_V {Type O LastRead -1 FirstWrite 1}
		res_7_V_V {Type O LastRead -1 FirstWrite 1}}
	conv_2d_cl_me_ap_fixed_ap_fixed_16_14_5_3_0_config2_s {
		data_0_V_V {Type I LastRead 2 FirstWrite -1}
		data_1_V_V {Type I LastRead 2 FirstWrite -1}
		data_2_V_V {Type I LastRead 2 FirstWrite -1}
		data_3_V_V {Type I LastRead 2 FirstWrite -1}
		data_4_V_V {Type I LastRead 2 FirstWrite -1}
		data_5_V_V {Type I LastRead 2 FirstWrite -1}
		data_6_V_V {Type I LastRead 2 FirstWrite -1}
		data_7_V_V {Type I LastRead 2 FirstWrite -1}
		res_0_V_V {Type O LastRead -1 FirstWrite 4}
		res_1_V_V {Type O LastRead -1 FirstWrite 4}
		res_2_V_V {Type O LastRead -1 FirstWrite 4}
		res_3_V_V {Type O LastRead -1 FirstWrite 4}
		res_4_V_V {Type O LastRead -1 FirstWrite 4}
		res_5_V_V {Type O LastRead -1 FirstWrite 4}
		res_6_V_V {Type O LastRead -1 FirstWrite 4}
		res_7_V_V {Type O LastRead -1 FirstWrite 4}
		layer_in_V {Type IO LastRead -1 FirstWrite -1}
		sX {Type IO LastRead -1 FirstWrite -1}
		sY {Type IO LastRead -1 FirstWrite -1}
		pY {Type IO LastRead -1 FirstWrite -1}
		pX {Type IO LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}
		w2_V {Type I LastRead -1 FirstWrite -1}}
	cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		output_V_read {Type I LastRead 0 FirstWrite -1}
		layer_in_row_Array_V_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_3 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_4 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_5 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_6 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_0_7 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_1_7 {Type X LastRead -1 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	product_dense_ap_fixed_ap_fixed_ap_fixed_s {
		a_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "103", "Max" : "1978"}
	, {"Name" : "Interval", "Min" : "102", "Max" : "1977"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_1_0_V_V { axis {  { input_1_0_V_V_TDATA in_data 0 16 }  { input_1_0_V_V_TVALID in_vld 0 1 }  { input_1_0_V_V_TREADY in_acc 1 1 } } }
	input_1_1_V_V { axis {  { input_1_1_V_V_TDATA in_data 0 16 }  { input_1_1_V_V_TVALID in_vld 0 1 }  { input_1_1_V_V_TREADY in_acc 1 1 } } }
	input_1_2_V_V { axis {  { input_1_2_V_V_TDATA in_data 0 16 }  { input_1_2_V_V_TVALID in_vld 0 1 }  { input_1_2_V_V_TREADY in_acc 1 1 } } }
	input_1_3_V_V { axis {  { input_1_3_V_V_TDATA in_data 0 16 }  { input_1_3_V_V_TVALID in_vld 0 1 }  { input_1_3_V_V_TREADY in_acc 1 1 } } }
	input_1_4_V_V { axis {  { input_1_4_V_V_TDATA in_data 0 16 }  { input_1_4_V_V_TVALID in_vld 0 1 }  { input_1_4_V_V_TREADY in_acc 1 1 } } }
	input_1_5_V_V { axis {  { input_1_5_V_V_TDATA in_data 0 16 }  { input_1_5_V_V_TVALID in_vld 0 1 }  { input_1_5_V_V_TREADY in_acc 1 1 } } }
	input_1_6_V_V { axis {  { input_1_6_V_V_TDATA in_data 0 16 }  { input_1_6_V_V_TVALID in_vld 0 1 }  { input_1_6_V_V_TREADY in_acc 1 1 } } }
	input_1_7_V_V { axis {  { input_1_7_V_V_TDATA in_data 0 16 }  { input_1_7_V_V_TVALID in_vld 0 1 }  { input_1_7_V_V_TREADY in_acc 1 1 } } }
	layer2_out_0_V_V { axis {  { layer2_out_0_V_V_TDATA out_data 1 16 }  { layer2_out_0_V_V_TVALID out_vld 1 1 }  { layer2_out_0_V_V_TREADY out_acc 0 1 } } }
	layer2_out_1_V_V { axis {  { layer2_out_1_V_V_TDATA out_data 1 16 }  { layer2_out_1_V_V_TVALID out_vld 1 1 }  { layer2_out_1_V_V_TREADY out_acc 0 1 } } }
	layer2_out_2_V_V { axis {  { layer2_out_2_V_V_TDATA out_data 1 16 }  { layer2_out_2_V_V_TVALID out_vld 1 1 }  { layer2_out_2_V_V_TREADY out_acc 0 1 } } }
	layer2_out_3_V_V { axis {  { layer2_out_3_V_V_TDATA out_data 1 16 }  { layer2_out_3_V_V_TVALID out_vld 1 1 }  { layer2_out_3_V_V_TREADY out_acc 0 1 } } }
	layer2_out_4_V_V { axis {  { layer2_out_4_V_V_TDATA out_data 1 16 }  { layer2_out_4_V_V_TVALID out_vld 1 1 }  { layer2_out_4_V_V_TREADY out_acc 0 1 } } }
	layer2_out_5_V_V { axis {  { layer2_out_5_V_V_TDATA out_data 1 16 }  { layer2_out_5_V_V_TVALID out_vld 1 1 }  { layer2_out_5_V_V_TREADY out_acc 0 1 } } }
	layer2_out_6_V_V { axis {  { layer2_out_6_V_V_TDATA out_data 1 16 }  { layer2_out_6_V_V_TVALID out_vld 1 1 }  { layer2_out_6_V_V_TREADY out_acc 0 1 } } }
	layer2_out_7_V_V { axis {  { layer2_out_7_V_V_TDATA out_data 1 16 }  { layer2_out_7_V_V_TVALID out_vld 1 1 }  { layer2_out_7_V_V_TREADY out_acc 0 1 } } }
	const_size_in_1 { ap_vld {  { const_size_in_1 out_data 1 16 }  { const_size_in_1_ap_vld out_vld 1 1 } } }
	const_size_out_1 { ap_vld {  { const_size_out_1 out_data 1 16 }  { const_size_out_1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
