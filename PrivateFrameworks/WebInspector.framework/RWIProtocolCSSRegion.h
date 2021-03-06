/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSRegion : RWIProtocolJSONObject

@property (nonatomic) int nodeId;
@property (nonatomic) long long regionOverset;

- (id)initWithRegionOverset:(long long)arg1 nodeId:(int)arg2;
- (int)nodeId;
- (long long)regionOverset;
- (void)setNodeId:(int)arg1;
- (void)setRegionOverset:(long long)arg1;

@end
