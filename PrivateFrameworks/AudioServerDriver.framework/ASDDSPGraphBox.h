/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDDSPGraphBox : NSObject {
    struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; } * _box;
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

@property (nonatomic, readonly) struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; /* Warning: unhandled struct encoding: '{basic_string<char' */ struct x5; }*box; /* unknown property attribute:  std::__1::default_delete<DSPGraph::FileInjector> >}}}{function<void (double)>={type=[24C]}^{__base<void (double)>}}{function<void (DSPGraph::Box *)>={type=[24C]}^{__base<void (DSPGraph::Box *)>}}{function<void (DSPGraph::Box *)>={type=[24C]}^{__base<void (DSPGraph::Box *)>}}BBBBq} */
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long numInputs;
@property (nonatomic, readonly) long long numOutputs;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; }*)box;
- (bool)getParameter:(float*)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (bool)getParameterInfo:(struct AudioUnitParameterInfo { BOOL x1[52]; struct __CFString {} *x2; unsigned int x3; struct __CFString {} *x4; unsigned int x5; float x6; float x7; float x8; unsigned int x9; }*)arg1 forID:(unsigned int)arg2 inScope:(unsigned int)arg3;
- (bool)getParameterList:(unsigned int*)arg1 numParameterIDs:(long long*)arg2 inScope:(unsigned int)arg3;
- (bool)hasParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)init;
- (id)initWithBox:(struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; }*)arg1 fromGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)name;
- (long long)numInputs;
- (long long)numOutputs;
- (bool)setParameter:(float)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 bufferOffset:(long long)arg5;
- (bool)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(bool)arg3;
- (bool)startRecordingPort:(long long)arg1 toFile:(id)arg2;
- (bool)stopInjectingPort:(long long)arg1;
- (bool)stopRecordingPort:(long long)arg1;

@end
