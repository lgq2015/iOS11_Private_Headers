/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NotePreviewController : UIViewController <UITextViewDelegate> {
    NoteContentLayer * _contentLayer;
    NoteObject * _note;
}

@property (nonatomic, readonly) NotesBackgroundView *backgroundView;
@property (nonatomic, retain) NoteContentLayer *contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NoteObject *note;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)contentLayer;
- (id)note;
- (void)setContentLayer:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setupHTMLNotePreview;
- (void)setupHTMLNotePreviewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)viewDidLoad;

@end
