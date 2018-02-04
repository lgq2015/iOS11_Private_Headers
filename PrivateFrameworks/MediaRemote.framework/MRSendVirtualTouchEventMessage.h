/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; } event;
@property (nonatomic, readonly) unsigned long long virtualDeviceID;

- (struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })event;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })arg1 virtualDeviceID:(unsigned long long)arg2;
- (unsigned long long)priority;
- (unsigned long long)type;
- (unsigned long long)virtualDeviceID;

@end
