/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginUpdateDelta : NSObject {
    NSSet * _addedOrigins;
    NSSet * _removedOrigins;
}

@property (nonatomic, readonly) NSSet *addedOrigins;
@property (nonatomic, readonly) NSSet *removedOrigins;

- (void).cxx_destruct;
- (id)addedOrigins;
- (id)initWithAddedOrigins:(id)arg1 removedOrigins:(id)arg2;
- (id)removedOrigins;

@end
