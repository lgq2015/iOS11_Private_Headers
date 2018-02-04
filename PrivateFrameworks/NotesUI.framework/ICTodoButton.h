/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTodoButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultSize;
    bool  _done;
    CALayer * _imageLayer;
    ICTrackedParagraph * _trackedParagraph;
}

@property (nonatomic) struct CGSize { double x1; double x2; } defaultImageSize;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultSize;
@property (getter=isDone, nonatomic) bool done;
@property (nonatomic, retain) CALayer *imageLayer;
@property (nonatomic) ICTrackedParagraph *trackedParagraph;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (struct CGSize { double x1; double x2; })defaultSize;
- (struct UIImage { Class x1; }*)imageForChecked:(bool)arg1 withHighlight:(bool)arg2;
- (id)imageLayer;
- (struct UIImage { Class x1; }*)imageNamed:(id)arg1 withTint:(struct UIColor { Class x1; }*)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDone;
- (void)setDefaultImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDone:(bool)arg1;
- (void)setDone:(bool)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 leftToRight:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setTrackedParagraph:(id)arg1;
- (id)trackedParagraph;
- (void)updateImagesAnimated:(bool)arg1;

@end