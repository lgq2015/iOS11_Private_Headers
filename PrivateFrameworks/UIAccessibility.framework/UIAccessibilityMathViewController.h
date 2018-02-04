/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityMathViewController : UIViewController {
    NSDictionary * _mathDictionary;
    SCRCMathExpression * _mathExpression;
}

@property (nonatomic, readonly) NSDictionary *mathDictionary;

+ (id)_uiaxBundle;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (id)_htmlString;
- (void)_styleBarButtonItem:(id)arg1;
- (id)initWithMathDictionary:(id)arg1;
- (void)loadView;
- (id)mathDictionary;
- (void)viewDidLoad;

@end
