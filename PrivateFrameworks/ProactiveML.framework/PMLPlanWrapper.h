/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol> {
    <PMLPlanProtocol> * _plan;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PMLPlanProtocol> *plan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlan:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)plan;
- (id)toPlistWithChunks:(id)arg1;

@end
