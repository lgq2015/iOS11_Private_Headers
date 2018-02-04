/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYDeferredIncomingSession : NSObject {
    NSString * _identifier;
    IDSMessageContext * _idsContext;
    NSDictionary * _metadata;
    NSURL * _resourceURL;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) IDSMessageContext *idsContext;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, copy) NSURL *resourceURL;

- (void).cxx_destruct;
- (id)identifier;
- (id)idsContext;
- (id)metadata;
- (id)resourceURL;
- (void)setIdentifier:(id)arg1;
- (void)setIdsContext:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setResourceURL:(id)arg1;

@end
