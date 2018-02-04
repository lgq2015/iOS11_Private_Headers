/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerDelayedEvents : NSObject {
    struct NSMutableDictionary { Class x1; } * _events;
}

- (void)dealloc;
- (id)eventForController:(unsigned long long)arg1 element:(int)arg2;
- (void)invokeEventsForController:(unsigned long long)arg1 beacuseElement:(int)arg2;

@end
