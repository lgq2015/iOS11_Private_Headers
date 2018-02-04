/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface flowChartEdge : NSObject {
    NSString * _buttonName;
    flowChartNode * _endNode;
    flowChartNode * _startNode;
    NSNumber * _weight;
}

@property (retain) NSString *buttonName;
@property (retain) flowChartNode *endNode;
@property (retain) flowChartNode *startNode;
@property (retain) NSNumber *weight;

- (void).cxx_destruct;
- (id)buttonName;
- (id)description;
- (id)endNode;
- (id)init;
- (id)initWithNodes:(id)arg1 andEndNode:(id)arg2 andButtonName:(id)arg3 andWeight:(id)arg4;
- (void)setButtonName:(id)arg1;
- (void)setEndNode:(id)arg1;
- (void)setStartNode:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)startNode;
- (id)weight;

@end
