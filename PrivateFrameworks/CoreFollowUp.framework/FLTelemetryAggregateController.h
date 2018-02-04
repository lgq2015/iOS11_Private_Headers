/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)captureClientAddition:(id)arg1;
- (void)captureClientRemoval:(id)arg1;
- (void)captureGroupAddition:(id)arg1;
- (void)captureGroupRemoval:(id)arg1;
- (void)captureItemAddition:(id)arg1;
- (void)captureItemRemoval:(id)arg1;
- (void)captureItemView:(id)arg1;

@end
