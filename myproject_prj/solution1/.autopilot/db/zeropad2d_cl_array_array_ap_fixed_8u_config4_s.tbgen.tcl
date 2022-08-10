set moduleName zeropad2d_cl_array_array_ap_fixed_8u_config4_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {zeropad2d_cl<array,array<ap_fixed,8u>,config4>}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_V_data_0_V int 16 regular {axi_s 0 volatile  { data_V_data_0_V Data } }  }
	{ data_V_data_1_V int 16 regular {axi_s 0 volatile  { data_V_data_1_V Data } }  }
	{ data_V_data_2_V int 16 regular {axi_s 0 volatile  { data_V_data_2_V Data } }  }
	{ data_V_data_3_V int 16 regular {axi_s 0 volatile  { data_V_data_3_V Data } }  }
	{ data_V_data_4_V int 16 regular {axi_s 0 volatile  { data_V_data_4_V Data } }  }
	{ data_V_data_5_V int 16 regular {axi_s 0 volatile  { data_V_data_5_V Data } }  }
	{ data_V_data_6_V int 16 regular {axi_s 0 volatile  { data_V_data_6_V Data } }  }
	{ data_V_data_7_V int 16 regular {axi_s 0 volatile  { data_V_data_7_V Data } }  }
	{ res_V_data_0_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_1_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_2_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_3_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_4_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_5_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_6_V int 16 regular {fifo 1 volatile }  }
	{ res_V_data_7_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_data_0_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_1_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_2_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_3_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_4_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_5_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_6_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "data_V_data_7_V", "interface" : "axis", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "res_V_data_0_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_1_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_2_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_3_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_4_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_5_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_6_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "res_V_data_7_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 58
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ data_V_data_0_V_TDATA sc_in sc_lv 16 signal 0 } 
	{ data_V_data_0_V_TVALID sc_in sc_logic 1 invld 0 } 
	{ data_V_data_0_V_TREADY sc_out sc_logic 1 inacc 0 } 
	{ data_V_data_1_V_TDATA sc_in sc_lv 16 signal 1 } 
	{ data_V_data_1_V_TVALID sc_in sc_logic 1 invld 1 } 
	{ data_V_data_1_V_TREADY sc_out sc_logic 1 inacc 1 } 
	{ data_V_data_2_V_TDATA sc_in sc_lv 16 signal 2 } 
	{ data_V_data_2_V_TVALID sc_in sc_logic 1 invld 2 } 
	{ data_V_data_2_V_TREADY sc_out sc_logic 1 inacc 2 } 
	{ data_V_data_3_V_TDATA sc_in sc_lv 16 signal 3 } 
	{ data_V_data_3_V_TVALID sc_in sc_logic 1 invld 3 } 
	{ data_V_data_3_V_TREADY sc_out sc_logic 1 inacc 3 } 
	{ data_V_data_4_V_TDATA sc_in sc_lv 16 signal 4 } 
	{ data_V_data_4_V_TVALID sc_in sc_logic 1 invld 4 } 
	{ data_V_data_4_V_TREADY sc_out sc_logic 1 inacc 4 } 
	{ data_V_data_5_V_TDATA sc_in sc_lv 16 signal 5 } 
	{ data_V_data_5_V_TVALID sc_in sc_logic 1 invld 5 } 
	{ data_V_data_5_V_TREADY sc_out sc_logic 1 inacc 5 } 
	{ data_V_data_6_V_TDATA sc_in sc_lv 16 signal 6 } 
	{ data_V_data_6_V_TVALID sc_in sc_logic 1 invld 6 } 
	{ data_V_data_6_V_TREADY sc_out sc_logic 1 inacc 6 } 
	{ data_V_data_7_V_TDATA sc_in sc_lv 16 signal 7 } 
	{ data_V_data_7_V_TVALID sc_in sc_logic 1 invld 7 } 
	{ data_V_data_7_V_TREADY sc_out sc_logic 1 inacc 7 } 
	{ res_V_data_0_V_din sc_out sc_lv 16 signal 8 } 
	{ res_V_data_0_V_full_n sc_in sc_logic 1 signal 8 } 
	{ res_V_data_0_V_write sc_out sc_logic 1 signal 8 } 
	{ res_V_data_1_V_din sc_out sc_lv 16 signal 9 } 
	{ res_V_data_1_V_full_n sc_in sc_logic 1 signal 9 } 
	{ res_V_data_1_V_write sc_out sc_logic 1 signal 9 } 
	{ res_V_data_2_V_din sc_out sc_lv 16 signal 10 } 
	{ res_V_data_2_V_full_n sc_in sc_logic 1 signal 10 } 
	{ res_V_data_2_V_write sc_out sc_logic 1 signal 10 } 
	{ res_V_data_3_V_din sc_out sc_lv 16 signal 11 } 
	{ res_V_data_3_V_full_n sc_in sc_logic 1 signal 11 } 
	{ res_V_data_3_V_write sc_out sc_logic 1 signal 11 } 
	{ res_V_data_4_V_din sc_out sc_lv 16 signal 12 } 
	{ res_V_data_4_V_full_n sc_in sc_logic 1 signal 12 } 
	{ res_V_data_4_V_write sc_out sc_logic 1 signal 12 } 
	{ res_V_data_5_V_din sc_out sc_lv 16 signal 13 } 
	{ res_V_data_5_V_full_n sc_in sc_logic 1 signal 13 } 
	{ res_V_data_5_V_write sc_out sc_logic 1 signal 13 } 
	{ res_V_data_6_V_din sc_out sc_lv 16 signal 14 } 
	{ res_V_data_6_V_full_n sc_in sc_logic 1 signal 14 } 
	{ res_V_data_6_V_write sc_out sc_logic 1 signal 14 } 
	{ res_V_data_7_V_din sc_out sc_lv 16 signal 15 } 
	{ res_V_data_7_V_full_n sc_in sc_logic 1 signal 15 } 
	{ res_V_data_7_V_write sc_out sc_logic 1 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "data_V_data_0_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_0_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_0_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_0_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_0_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_0_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_1_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_1_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_1_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_1_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_1_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_1_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_2_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_2_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_2_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_2_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_2_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_2_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_3_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_3_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_3_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_3_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_3_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_3_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_4_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_4_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_4_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_4_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_4_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_4_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_5_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_5_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_5_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_5_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_5_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_5_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_6_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_6_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_6_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_6_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_6_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_6_V", "role": "TREADY" }} , 
 	{ "name": "data_V_data_7_V_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data_V_data_7_V", "role": "TDATA" }} , 
 	{ "name": "data_V_data_7_V_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "data_V_data_7_V", "role": "TVALID" }} , 
 	{ "name": "data_V_data_7_V_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "data_V_data_7_V", "role": "TREADY" }} , 
 	{ "name": "res_V_data_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "din" }} , 
 	{ "name": "res_V_data_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_0_V", "role": "write" }} , 
 	{ "name": "res_V_data_1_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "din" }} , 
 	{ "name": "res_V_data_1_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_1_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_1_V", "role": "write" }} , 
 	{ "name": "res_V_data_2_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "din" }} , 
 	{ "name": "res_V_data_2_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_2_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_2_V", "role": "write" }} , 
 	{ "name": "res_V_data_3_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "din" }} , 
 	{ "name": "res_V_data_3_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_3_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_3_V", "role": "write" }} , 
 	{ "name": "res_V_data_4_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "din" }} , 
 	{ "name": "res_V_data_4_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_4_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_4_V", "role": "write" }} , 
 	{ "name": "res_V_data_5_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "din" }} , 
 	{ "name": "res_V_data_5_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_5_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_5_V", "role": "write" }} , 
 	{ "name": "res_V_data_6_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "din" }} , 
 	{ "name": "res_V_data_6_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_6_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_6_V", "role": "write" }} , 
 	{ "name": "res_V_data_7_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "din" }} , 
 	{ "name": "res_V_data_7_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "full_n" }} , 
 	{ "name": "res_V_data_7_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V_data_7_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
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
			{"Name" : "res_V_data_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_1_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_1_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_2_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_2_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_3_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_3_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_4_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_4_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_5_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_5_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_6_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_6_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "res_V_data_7_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "res_V_data_7_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_0_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_1_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_2_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_3_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_4_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_5_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_6_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_data_V_data_7_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		res_V_data_7_V {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "28", "Max" : "28"}
	, {"Name" : "Interval", "Min" : "28", "Max" : "28"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_V_data_0_V { axis {  { data_V_data_0_V_TDATA in_data 0 16 }  { data_V_data_0_V_TVALID in_vld 0 1 }  { data_V_data_0_V_TREADY in_acc 1 1 } } }
	data_V_data_1_V { axis {  { data_V_data_1_V_TDATA in_data 0 16 }  { data_V_data_1_V_TVALID in_vld 0 1 }  { data_V_data_1_V_TREADY in_acc 1 1 } } }
	data_V_data_2_V { axis {  { data_V_data_2_V_TDATA in_data 0 16 }  { data_V_data_2_V_TVALID in_vld 0 1 }  { data_V_data_2_V_TREADY in_acc 1 1 } } }
	data_V_data_3_V { axis {  { data_V_data_3_V_TDATA in_data 0 16 }  { data_V_data_3_V_TVALID in_vld 0 1 }  { data_V_data_3_V_TREADY in_acc 1 1 } } }
	data_V_data_4_V { axis {  { data_V_data_4_V_TDATA in_data 0 16 }  { data_V_data_4_V_TVALID in_vld 0 1 }  { data_V_data_4_V_TREADY in_acc 1 1 } } }
	data_V_data_5_V { axis {  { data_V_data_5_V_TDATA in_data 0 16 }  { data_V_data_5_V_TVALID in_vld 0 1 }  { data_V_data_5_V_TREADY in_acc 1 1 } } }
	data_V_data_6_V { axis {  { data_V_data_6_V_TDATA in_data 0 16 }  { data_V_data_6_V_TVALID in_vld 0 1 }  { data_V_data_6_V_TREADY in_acc 1 1 } } }
	data_V_data_7_V { axis {  { data_V_data_7_V_TDATA in_data 0 16 }  { data_V_data_7_V_TVALID in_vld 0 1 }  { data_V_data_7_V_TREADY in_acc 1 1 } } }
	res_V_data_0_V { ap_fifo {  { res_V_data_0_V_din fifo_data 1 16 }  { res_V_data_0_V_full_n fifo_status 0 1 }  { res_V_data_0_V_write fifo_update 1 1 } } }
	res_V_data_1_V { ap_fifo {  { res_V_data_1_V_din fifo_data 1 16 }  { res_V_data_1_V_full_n fifo_status 0 1 }  { res_V_data_1_V_write fifo_update 1 1 } } }
	res_V_data_2_V { ap_fifo {  { res_V_data_2_V_din fifo_data 1 16 }  { res_V_data_2_V_full_n fifo_status 0 1 }  { res_V_data_2_V_write fifo_update 1 1 } } }
	res_V_data_3_V { ap_fifo {  { res_V_data_3_V_din fifo_data 1 16 }  { res_V_data_3_V_full_n fifo_status 0 1 }  { res_V_data_3_V_write fifo_update 1 1 } } }
	res_V_data_4_V { ap_fifo {  { res_V_data_4_V_din fifo_data 1 16 }  { res_V_data_4_V_full_n fifo_status 0 1 }  { res_V_data_4_V_write fifo_update 1 1 } } }
	res_V_data_5_V { ap_fifo {  { res_V_data_5_V_din fifo_data 1 16 }  { res_V_data_5_V_full_n fifo_status 0 1 }  { res_V_data_5_V_write fifo_update 1 1 } } }
	res_V_data_6_V { ap_fifo {  { res_V_data_6_V_din fifo_data 1 16 }  { res_V_data_6_V_full_n fifo_status 0 1 }  { res_V_data_6_V_write fifo_update 1 1 } } }
	res_V_data_7_V { ap_fifo {  { res_V_data_7_V_din fifo_data 1 16 }  { res_V_data_7_V_full_n fifo_status 0 1 }  { res_V_data_7_V_write fifo_update 1 1 } } }
}
