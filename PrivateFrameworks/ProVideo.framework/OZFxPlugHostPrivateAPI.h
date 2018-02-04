/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugHostPrivateAPI : NSObject <FxHostPrivateAPI, FxRenderModelAPIPrivate, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; struct PCString { struct __CFString {} *x_12_1_1; } x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; int x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct OZChannelBase {} *x25; bool x26; id x27; bool x28; struct PCMutex { int (**x_29_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_29_1_2; } x29; unsigned int x30; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (float)blendingGamma;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (bool)giveEffectUIFocus;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; struct PCString { struct __CFString {} *x_12_1_1; } x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; int x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct OZChannelBase {} *x25; bool x26; id x27; bool x28; struct PCMutex { int (**x_29_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_29_1_2; } x29; unsigned int x30; }*)arg1;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;

@end
