/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictionCell : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _activeFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _baseFrame;
    long long  _candidateType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedFrame;
    bool  _isAutocorrection;
    bool  _isCenter;
    bool  _isEmoji;
    bool  _isLongCandidate;
    bool  _isTypedString;
    TIKeyboardCandidate * _prediction;
    unsigned int  _slotID;
    int  _state;
    UIKBKeyView * m_activeKeyView;
    UIKBKeyView * m_enabledKeyView;
    struct CGSize { 
        double width; 
        double height; 
    }  m_keyViewSize;
    UIMorphingLabel * m_label;
    bool  m_lightKeyboard;
    UIView * m_maskView;
    double  m_maskViewMargin;
    UILabel * m_suggestionLabel;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } baseFrame;
@property (nonatomic) long long candidateType;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property (nonatomic) bool isAutocorrection;
@property (nonatomic) bool isCenter;
@property (nonatomic) bool isEmoji;
@property (nonatomic) bool isLongCandidate;
@property (nonatomic) bool isTypedString;
@property (nonatomic, readonly, retain) TIKeyboardCandidate *prediction;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) int state;

+ (double)fontSizeForSingleLineLayout;
+ (id)newKeyViewWithSize:(struct CGSize { double x1; double x2; })arg1 state:(int)arg2 needsBackground:(bool)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })baseFrame;
- (long long)candidateType;
- (void)clearKeyViewForState:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAutocorrection;
- (bool)isCenter;
- (bool)isEmoji;
- (bool)isLongCandidate;
- (bool)isTypedString;
- (id)label;
- (id)prediction;
- (void)scrollLabelWithText:(id)arg1 force:(bool)arg2;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCandidateType:(long long)arg1;
- (void)setCellAttributes;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsAutocorrection:(bool)arg1;
- (void)setIsCenter:(bool)arg1;
- (void)setIsEmoji:(bool)arg1;
- (void)setIsLongCandidate:(bool)arg1;
- (void)setIsTypedString:(bool)arg1;
- (void)setKeyViewForState:(int)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 withAttrText:(id)arg2;
- (void)setState:(int)arg1 withText:(id)arg2;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(bool)arg3 isEmoji:(bool)arg4;
- (void)setVisibleRect;
- (bool)shouldDisplayAsSuggestion:(id)arg1;
- (bool)shouldDisplayHeaderForPrediction:(id)arg1;
- (unsigned int)slotID;
- (int)state;
- (id)textColor;
- (void)touchMoved:(double)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)willMoveToSuperview:(id)arg1;

@end