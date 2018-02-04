/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessaging : NSObject {
    unsigned int  p2pID;
    NSMutableDictionary * topics;
}

- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 receiveHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)initWithP2PID:(unsigned int)arg1 remoteVersion:(id)arg2;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)stopMessaging;

@end
