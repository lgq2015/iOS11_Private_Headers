/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface flowChartNode : NSObject {
    NSString * _className;
    int  _clickOrder;
    NSString * _documentationDescription;
    NSMutableSet * _edgesIn;
    NSMutableSet * _edgesOut;
    double  _expectedNumberOfClicks;
    NSMutableString * _graphNodeString;
    NSString * _graphStructString;
    flowChartNode * _parentNode;
    NSString * _screenshotLocation;
    NSMutableArray * _subNodes;
    NSString * _viewName;
}

@property (retain) NSString *className;
@property int clickOrder;
@property (retain) NSString *documentationDescription;
@property (retain) NSMutableSet *edgesIn;
@property (retain) NSMutableSet *edgesOut;
@property double expectedNumberOfClicks;
@property (retain) NSMutableString *graphNodeString;
@property (retain) NSString *graphStructString;
@property (retain) flowChartNode *parentNode;
@property (retain) NSString *screenshotLocation;
@property (retain) NSMutableArray *subNodes;
@property (retain) NSString *viewName;

- (void).cxx_destruct;
- (id)className;
- (int)clickOrder;
- (id)description;
- (id)documentationDescription;
- (id)edgesIn;
- (id)edgesOut;
- (double)expectedNumberOfClicks;
- (id)graphNodeString;
- (id)graphStructString;
- (id)init;
- (id)initWithClassName:(id)arg1 andParentNode:(id)arg2 andViewName:(id)arg3 andDocumentationDescription:(id)arg4;
- (id)parentNode;
- (id)screenshotLocation;
- (void)setClassName:(id)arg1;
- (void)setClickOrder:(int)arg1;
- (void)setDocumentationDescription:(id)arg1;
- (void)setEdgesIn:(id)arg1;
- (void)setEdgesOut:(id)arg1;
- (void)setExpectedNumberOfClicks:(double)arg1;
- (void)setGraphNodeString:(id)arg1;
- (void)setGraphStructString:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setScreenshotLocation:(id)arg1;
- (void)setSubNodes:(id)arg1;
- (void)setViewName:(id)arg1;
- (id)subNodes;
- (void)updateGraphNodeString;
- (id)viewName;

@end
