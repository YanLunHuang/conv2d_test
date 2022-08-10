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
	{ input_1_V_data_0_V int 16 regular {axi_s 0 volatile  { input_1_V_data_0_V Data } }  }
	{ input_1_V_data_1_V int 16 regular {axi_s 0 volatile  { input_1_V_data_1_V Data } }  }
	{ input_1_V_data_2_V int 16 regular {axi_s 0 volatile  { input_1_V_data_2_V Data } }  }
	{ input_1_V_data_3_V int 16 regular {axi_s 0 volatile  { input_1_V_data_3_V Data } }  }
	{ input_1_V_data_4_V int 16 regular {axi_s 0 volatile  { input_1_V_data_4_V Data } }  }
	{ input_1_V_data_5_V int 16 regular {axi_s 0 volatile  { input_1_V_data_5_V Data } }  }
	{ input_1_V_data_6_V int 16 regular {axi_s 0 volatile  { input_1_V_data_6_V Data } }  }
	{ input_1_V_data_7_V int 16 regular {axi_s 0 volatile  { input_1_V_data_7_V Data } }  }
	{ layer2_out_V_data_0_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_0_V Data } }  }
	{ layer2_out_V_data_1_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_1_V Data } }  }
	{ layer2_out_V_data_2_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_2_V Data } }  }
	{ layer2_out_V_data_3_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_3_V Data } }  }
	{ layer2_out_V_data_4_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_4_V Data } }  }
	{ layer2_out_V_data_5_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_5_V Data } }  }
	{ layer2_out_V_data_6_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_6_V Data } }  }
	{ layer2_out_V_data_7_V int 16 regular {axi_s 1 volatile  { layer2_out_V_data_7_V Data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_1_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "input_1_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_1.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "layer2_out_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer2_out.V.data.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 54
set portList { 
	{ input_1_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ input_1_V_data_1_V_TDATA sc_in sc_lv 16 signal 1 } 
	{ input_1_V_data_2_V_TDATA sc_in sc_lv 16 signal 2 } 
	{ input_1_V_data_3_V_TDATA sc_in sc_lv 16 signal 3 } 
	{ input_1_V_data_4_V_TDATA sc_in sc_lv 16 signal 4 } 
	{ input_1_V_data_5_V_TDATA sc_in sc_lv 16 signal 5 } 
	{ input_1_V_data_6_V_TDATA sc_in sc_lv 16 signal 6 } 
	{ input_1_V_data_7_V_TDATA sc_in sc_lv 16 signal 7 } 
	{ layer2_out_V_data_0_V_TDATA sc_out sc_lv 16 signal 8 } 
	{ layer2_out_V_data_1_V_TDATA sc_out sc_lv 16 signal 9 } 
	{ layer2_out_V_data_2_V_TDATA sc_out sc_lv 16 signal 10 } 
	{ layer2_out_V_data_3_V_TDATA sc_out sc_lv 16 signal 11 } 
	{ layer2_out_V_data_4_V_TDATA sc_out sc_lv 16 signal 12 } 
	{ layer2_out_V_data_5_V_TDATA sc_out sc_lv 16 signal 13 } 
	{ layer2_out_V_data_6_V_TDATA sc_out sc_lv 16 signal 14 } 
	{ layer2_out_V_data_7_V_TDATA sc_out sc_lv 16 signal 15 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ input_1_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ input_1_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ input_1_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ input_1_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_1_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ input_1_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ input_1_V_data_3_V_TVALID sc_in sc_logic 1 invld 3 } 
	{ input_1_V_data_3_V_TREADY sc_out sc_logic 1 inacc 3 } 
	{ input_1_V_data_4_V_TVALID sc_in sc_logic 1 invld 4 } 
	{ input_1_V_data_4_V_TREADY sc_out sc_logic 1 inacc 4 } 
	{ input_1_V_data_5_V_TVALID sc_in sc_logic 1 invld 5 } 
	{ input_1_V_data_5_V_TREADY sc_out sc_logic 1 inacc 5 } 
	{ input_1_V_data_6_V_TVALID sc_in sc_logic 1 invld 6 } 
	{ input_1_V_data_6_V_TREADY sc_out sc_logic 1 inacc 6 } 
	{ input_1_V_data_7_V_TVALID sc_in sc_logic 1 invld 7 } 
	{ input_1_V_data_7_V_TREADY sc_out sc_logic 1 inacc 7 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ layer2_out_V_data_0_V_TVALID sc_out sc_logic 1 outvld 8 } 
	{ layer2_out_V_data_0_V_TREADY sc_in sc_logic 1 outacc 8 } 
	{ layer2_out_V_data_1_V_TVALID sc_out sc_logic 1 outvld 9 } 
	{ layer2_out_V_data_1_V_TREADY sc_in sc_logic 1 outacc 9 } 
	{ layer2_out_V_data_2_V_TVALID sc_out sc_logic 1 outvld 10 } 
	{ layer2_out_V_data_2_V_TREADY sc_in sc_logic 1 outacc 10 } 
	{ layer2_out_V_data_3_V_TVALID sc_out sc_logic 1 outvld 11 } 
	{ layer2_out_V_data_3_V_TREADY sc_in sc_logic 1 outacc 11 } 
	{ layer2_out_V_data_4_V_TVALID sc_out sc_logic 1 outvld 12 } 
	{ layer2_out_V_data_4_V_TREADY sc_in sc_logic 1 outacc 12 } 
	{ layer2_out_V_data_5_V_TVALID sc_out sc_logic 1 outvld 13 } 
	{ layer2_out_V_data_5_V_TREADY sc_in sc_logic 1 outacc 13 } 
	{ layer2_out_V_data_6_V_TVALID sc_out sc_logic 1 outvld 14 } 
	{ layer2_out_V_data_6_V_TREADY sc_in sc_logic 1 outacc 14 } 
	{ layer2_out_V_data_7_V_TVALID sc_out sc_logic 1 outvld 15 } 
	{ layer2_out_V_data_7_V_TREADY sc_in sc_logic 1 outacc 15 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "input_1_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_3_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_4_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_5_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_6_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "input_1_V_data_7_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_1_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_0_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_1_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_2_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_3_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_4_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_5_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_6_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "layer2_out_V_data_7_V_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer2_out_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "input_1_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_3_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_3_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_4_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_4_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_5_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_5_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_6_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_6_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "input_1_V_data_7_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_1_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "input_1_V_data_7_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_1_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "layer2_out_V_data_0_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_0_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_1_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_1_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_2_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_2_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_3_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_3_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_4_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_4_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_5_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_5_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_6_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_6_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "layer2_out_V_data_7_V_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer2_out_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "layer2_out_V_data_7_V_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "layer2_out_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "10", "53", "54", "55", "56", "57", "58", "59", "60", "61"],
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
			{"ID" : "1", "Name" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0"}],
		"OutputProcess" : [
			{"ID" : "10", "Name" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0"}],
		"Port" : [
			{"Name" : "input_1_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_0_V"}]},
			{"Name" : "input_1_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_1_V"}]},
			{"Name" : "input_1_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_2_V"}]},
			{"Name" : "input_1_V_data_3_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_3_V"}]},
			{"Name" : "input_1_V_data_4_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_4_V"}]},
			{"Name" : "input_1_V_data_5_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_5_V"}]},
			{"Name" : "input_1_V_data_6_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_6_V"}]},
			{"Name" : "input_1_V_data_7_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Port" : "data_V_data_7_V"}]},
			{"Name" : "layer2_out_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_0_V"}]},
			{"Name" : "layer2_out_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_1_V"}]},
			{"Name" : "layer2_out_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_2_V"}]},
			{"Name" : "layer2_out_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_3_V"}]},
			{"Name" : "layer2_out_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_4_V"}]},
			{"Name" : "layer2_out_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_5_V"}]},
			{"Name" : "layer2_out_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_6_V"}]},
			{"Name" : "layer2_out_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "res_V_data_7_V"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_V"}]},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "sX"}]},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "sY"}]},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "pY"}]},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "pX"}]},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Port" : "w2_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "zeropad2d_cl_array_array_ap_fixed_8u_config4_s",
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
			{"Name" : "data_V_data_0_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "10", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_0_V_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_1_V_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_2_V_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_3_V_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_4_V_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_5_V_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_6_V_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.zeropad2d_cl_array_array_ap_fixed_8u_config4_U0.regslice_both_data_V_data_7_V_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0", "Parent" : "0", "Child" : ["11", "12", "29", "31", "33", "35", "37", "39", "41", "43", "45", "46", "47", "48", "49", "50", "51", "52"],
		"CDFG" : "conv_2d_cl_array_array_ap_fixed_8u_config2_s",
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
		"StartSource" : "1",
		"StartFifo" : "start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_U",
		"Port" : [
			{"Name" : "data_V_data_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "53",
				"BlockSignal" : [
					{"Name" : "data_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_1_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "54",
				"BlockSignal" : [
					{"Name" : "data_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_2_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "55",
				"BlockSignal" : [
					{"Name" : "data_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_3_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "56",
				"BlockSignal" : [
					{"Name" : "data_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_4_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "57",
				"BlockSignal" : [
					{"Name" : "data_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_5_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "58",
				"BlockSignal" : [
					{"Name" : "data_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_6_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "59",
				"BlockSignal" : [
					{"Name" : "data_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "data_V_data_7_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "60",
				"BlockSignal" : [
					{"Name" : "data_V_data_7_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_0_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer_in_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pY", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pX", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "layer_in_row_Array_V_0_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_0"}]},
			{"Name" : "layer_in_row_Array_V_1_0", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_0"}]},
			{"Name" : "layer_in_row_Array_V_0_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_1"}]},
			{"Name" : "layer_in_row_Array_V_1_1", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_1"}]},
			{"Name" : "layer_in_row_Array_V_0_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_2"}]},
			{"Name" : "layer_in_row_Array_V_1_2", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_2"}]},
			{"Name" : "layer_in_row_Array_V_0_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_3"}]},
			{"Name" : "layer_in_row_Array_V_1_3", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_3"}]},
			{"Name" : "layer_in_row_Array_V_0_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_4"}]},
			{"Name" : "layer_in_row_Array_V_1_4", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_4"}]},
			{"Name" : "layer_in_row_Array_V_0_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_5"}]},
			{"Name" : "layer_in_row_Array_V_1_5", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_5"}]},
			{"Name" : "layer_in_row_Array_V_0_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_6"}]},
			{"Name" : "layer_in_row_Array_V_1_6", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_6"}]},
			{"Name" : "layer_in_row_Array_V_0_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_0_7"}]},
			{"Name" : "layer_in_row_Array_V_1_7", "Type" : "Memory", "Direction" : "X",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Port" : "layer_in_row_Array_V_1_7"}]},
			{"Name" : "w2_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.w2_V_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495", "Parent" : "10", "Child" : ["13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28"],
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
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_0_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_0_U", "Parent" : "12"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_1_U", "Parent" : "12"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_1_U", "Parent" : "12"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_2_U", "Parent" : "12"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_2_U", "Parent" : "12"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_3_U", "Parent" : "12"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_3_U", "Parent" : "12"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_4_U", "Parent" : "12"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_4_U", "Parent" : "12"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_5_U", "Parent" : "12"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_5_U", "Parent" : "12"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_6_U", "Parent" : "12"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_6_U", "Parent" : "12"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_0_7_U", "Parent" : "12"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.call_ret_cnnshift_arr_ap_fixed_ap_fixed_16_14_5_3_0_config2_s_fu_495.layer_in_row_Array_V_1_7_U", "Parent" : "12"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_534", "Parent" : "10", "Child" : ["30"],
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
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_0_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_534.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_540", "Parent" : "10", "Child" : ["32"],
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
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_1_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_540.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_546", "Parent" : "10", "Child" : ["34"],
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
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_2_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_546.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_552", "Parent" : "10", "Child" : ["36"],
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
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_3_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_552.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_558", "Parent" : "10", "Child" : ["38"],
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
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_4_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_558.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_564", "Parent" : "10", "Child" : ["40"],
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
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_5_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_564.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_570", "Parent" : "10", "Child" : ["42"],
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
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.tmpmult_6_V_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_570.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "41"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.op_V_assign_1_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_576", "Parent" : "10", "Child" : ["44"],
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
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.op_V_assign_1_0_7_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_576.myproject_mul_mul_16s_16s_18_1_1_U21", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_0_V_U", "Parent" : "10"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_1_V_U", "Parent" : "10"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_2_V_U", "Parent" : "10"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_3_V_U", "Parent" : "10"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_4_V_U", "Parent" : "10"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_5_V_U", "Parent" : "10"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_6_V_U", "Parent" : "10"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv_2d_cl_array_array_ap_fixed_8u_config2_U0.regslice_both_res_V_data_7_V_U", "Parent" : "10"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer4_out_V_data_7_V_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv_2d_cl_array_array_ap_fixed_8u_config2_U0_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		input_1_V_data_0_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_1_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_2_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_3_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_4_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_5_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_6_V {Type I LastRead 3 FirstWrite -1}
		input_1_V_data_7_V {Type I LastRead 3 FirstWrite -1}
		layer2_out_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		layer2_out_V_data_7_V {Type O LastRead -1 FirstWrite 4}
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
	zeropad2d_cl_array_array_ap_fixed_8u_config4_s {
		data_V_data_0_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 3 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 3 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 1}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}}
	conv_2d_cl_array_array_ap_fixed_8u_config2_s {
		data_V_data_0_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_1_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_2_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_3_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_4_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_5_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_6_V {Type I LastRead 2 FirstWrite -1}
		data_V_data_7_V {Type I LastRead 2 FirstWrite -1}
		res_V_data_0_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_1_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_2_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_3_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_4_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_5_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_6_V {Type O LastRead -1 FirstWrite 4}
		res_V_data_7_V {Type O LastRead -1 FirstWrite 4}
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
	input_1_V_data_0_V { axis {  { input_1_V_data_0_V_TDATA in_data 0 16 }  { input_1_V_data_0_V_TVALID in_vld 0 1 }  { input_1_V_data_0_V_TREADY in_acc 1 1 } } }
	input_1_V_data_1_V { axis {  { input_1_V_data_1_V_TDATA in_data 0 16 }  { input_1_V_data_1_V_TVALID in_vld 0 1 }  { input_1_V_data_1_V_TREADY in_acc 1 1 } } }
	input_1_V_data_2_V { axis {  { input_1_V_data_2_V_TDATA in_data 0 16 }  { input_1_V_data_2_V_TVALID in_vld 0 1 }  { input_1_V_data_2_V_TREADY in_acc 1 1 } } }
	input_1_V_data_3_V { axis {  { input_1_V_data_3_V_TDATA in_data 0 16 }  { input_1_V_data_3_V_TVALID in_vld 0 1 }  { input_1_V_data_3_V_TREADY in_acc 1 1 } } }
	input_1_V_data_4_V { axis {  { input_1_V_data_4_V_TDATA in_data 0 16 }  { input_1_V_data_4_V_TVALID in_vld 0 1 }  { input_1_V_data_4_V_TREADY in_acc 1 1 } } }
	input_1_V_data_5_V { axis {  { input_1_V_data_5_V_TDATA in_data 0 16 }  { input_1_V_data_5_V_TVALID in_vld 0 1 }  { input_1_V_data_5_V_TREADY in_acc 1 1 } } }
	input_1_V_data_6_V { axis {  { input_1_V_data_6_V_TDATA in_data 0 16 }  { input_1_V_data_6_V_TVALID in_vld 0 1 }  { input_1_V_data_6_V_TREADY in_acc 1 1 } } }
	input_1_V_data_7_V { axis {  { input_1_V_data_7_V_TDATA in_data 0 16 }  { input_1_V_data_7_V_TVALID in_vld 0 1 }  { input_1_V_data_7_V_TREADY in_acc 1 1 } } }
	layer2_out_V_data_0_V { axis {  { layer2_out_V_data_0_V_TDATA out_data 1 16 }  { layer2_out_V_data_0_V_TVALID out_vld 1 1 }  { layer2_out_V_data_0_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_1_V { axis {  { layer2_out_V_data_1_V_TDATA out_data 1 16 }  { layer2_out_V_data_1_V_TVALID out_vld 1 1 }  { layer2_out_V_data_1_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_2_V { axis {  { layer2_out_V_data_2_V_TDATA out_data 1 16 }  { layer2_out_V_data_2_V_TVALID out_vld 1 1 }  { layer2_out_V_data_2_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_3_V { axis {  { layer2_out_V_data_3_V_TDATA out_data 1 16 }  { layer2_out_V_data_3_V_TVALID out_vld 1 1 }  { layer2_out_V_data_3_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_4_V { axis {  { layer2_out_V_data_4_V_TDATA out_data 1 16 }  { layer2_out_V_data_4_V_TVALID out_vld 1 1 }  { layer2_out_V_data_4_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_5_V { axis {  { layer2_out_V_data_5_V_TDATA out_data 1 16 }  { layer2_out_V_data_5_V_TVALID out_vld 1 1 }  { layer2_out_V_data_5_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_6_V { axis {  { layer2_out_V_data_6_V_TDATA out_data 1 16 }  { layer2_out_V_data_6_V_TVALID out_vld 1 1 }  { layer2_out_V_data_6_V_TREADY out_acc 0 1 } } }
	layer2_out_V_data_7_V { axis {  { layer2_out_V_data_7_V_TDATA out_data 1 16 }  { layer2_out_V_data_7_V_TVALID out_vld 1 1 }  { layer2_out_V_data_7_V_TREADY out_acc 0 1 } } }
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
