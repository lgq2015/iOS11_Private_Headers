/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeDroppedSampleMessage : BWNodeMessage {
    BWDroppedSample * _droppedSample;
}

@property (readonly) BWDroppedSample *droppedSample;

+ (id)newMessageWithDroppedSample:(id)arg1;

- (id)_initWithDroppedSample:(id)arg1;
- (void)dealloc;
- (id)droppedSample;

@end
