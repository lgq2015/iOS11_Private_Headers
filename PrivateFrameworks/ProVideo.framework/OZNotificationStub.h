/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZNotificationStub : NSObject {
    struct OZDocument { int (**x1)(); int (**x2)(); struct PCSafeHandle {} *x3; struct OZScene {} *x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *> > { struct __list_node_base<OZObjectSelections *, void *> { struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_1; struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_2; } x_6_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZObjectSelections *, void *> > > { unsigned long long x_2_2_1; } x_6_1_2; } x6; struct vector<OZChannelRef, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_7_1_1; struct OZChannelRef {} *x_7_1_2; struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_3_2_1; } x_7_1_3; } x7; struct PCString { struct __CFString {} *x_8_1_1; } x8; unsigned int x9; bool x10; bool x11; unsigned int x12; bool x13; int x14; struct PCString { struct __CFString {} *x_15_1_1; } x15; } * _pDocument;
    NSTimer * _pTimer;
}

- (void)createTimer;
- (void)dealloc;
- (void)fire;
- (id)initWithOZDocument:(struct OZDocument { int (**x1)(); int (**x2)(); struct PCSafeHandle {} *x3; struct OZScene {} *x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct list<OZObjectSelections *, std::__1::allocator<OZObjectSelections *> > { struct __list_node_base<OZObjectSelections *, void *> { struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_1; struct __list_node_base<OZObjectSelections *, void *> {} *x_1_2_2; } x_6_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<OZObjectSelections *, void *> > > { unsigned long long x_2_2_1; } x_6_1_2; } x6; struct vector<OZChannelRef, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_7_1_1; struct OZChannelRef {} *x_7_1_2; struct __compressed_pair<OZChannelRef *, std::__1::allocator<OZChannelRef> > { struct OZChannelRef {} *x_3_2_1; } x_7_1_3; } x7; struct PCString { struct __CFString {} *x_8_1_1; } x8; unsigned int x9; bool x10; bool x11; unsigned int x12; bool x13; int x14; struct PCString { struct __CFString {} *x_15_1_1; } x15; }*)arg1 useTimer:(bool)arg2;
- (void)processNotifications:(id)arg1;
- (void)releaseTimer;

@end
