/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AssistantSubUIViewController : AUUITableViewController {
    NSDictionary * _inParamDict;
    NSMutableDictionary * _outResultsDict;
    AssistantUIViewController * _parentController;
}

@property (nonatomic, retain) NSDictionary *inParamDict;
@property (nonatomic, readonly) NSDictionary *outResultsDict;
@property (nonatomic) AssistantUIViewController *parentController;

+ (id)containerViewWithWidth:(double)arg1;
+ (id)labelViewInContainer:(id*)arg1 width:(double)arg2;
+ (id)labelViewInContainer:(id*)arg1 width:(double)arg2 constrain:(bool)arg3;
+ (id)labelViewInContainer:(id*)arg1 width:(double)arg2 withSpinner:(id*)arg3 above:(bool)arg4;
+ (id)tableViewWithWidth:(double)arg1 height:(double)arg2;
+ (id)topoViewWithWidth:(double)arg1;

- (void)dealloc;
- (id)getProductLocalizedStringWithFormat:(id)arg1;
- (id)inParamDict;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)outResultsDict;
- (id)parentController;
- (void)setInParamDict:(id)arg1;
- (void)setLeftNavigationButton:(id)arg1 enable:(bool)arg2 hide:(bool)arg3;
- (void)setParentController:(id)arg1;
- (void)setRightNavigationButton:(id)arg1 enable:(bool)arg2 hide:(bool)arg3;
- (void)viewDidLoad;

@end
