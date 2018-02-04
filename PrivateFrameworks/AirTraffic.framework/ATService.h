/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATService : NSObject <ATMessageLinkObserver> {
    NSMutableSet * _messageLinks;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *messageLinks;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (void)addMessageLink:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)messageLinkForIdentifier:(id)arg1;
- (id)messageLinks;
- (id)observers;
- (void)removeMessageLink:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)run;
- (void)setMessageLinks:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)stop;

@end
