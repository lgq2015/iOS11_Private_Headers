/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBDerivedKeyboard : NSObject {
    NSString * _derivedKBStarPrefixName;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
}

@property (nonatomic, copy) NSString *derivedKBStarPrefixName;
@property (nonatomic) struct CGSize { double x1; double x2; } keyboardSize;

- (void).cxx_destruct;
- (id)derivedKBStarPrefixName;
- (struct CGSize { double x1; double x2; })keyboardSize;
- (void)setDerivedKBStarPrefixName:(id)arg1;
- (void)setKeyboardSize:(struct CGSize { double x1; double x2; })arg1;

@end
