/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerDelayedEvent : NSObject {
    unsigned long long  _lastDownEvent;
    id /* block */  _sendEventBlock;
}

@property (nonatomic) unsigned long long lastDownEvent;
@property (nonatomic, copy) id /* block */ sendEventBlock;

- (void)dealloc;
- (unsigned long long)lastDownEvent;
- (void)send;
- (id /* block */)sendEventBlock;
- (void)setLastDownEvent:(unsigned long long)arg1;
- (void)setSendEventBlock:(id /* block */)arg1;

@end
