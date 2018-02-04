/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPencilKitDrawingViewController : UIViewController <PKCanvasViewDelegate> {
    ICAttachment * _attachment;
    PKCanvasView * _canvas;
    UIButton * _closeButton;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, readonly) ICAttachmentPencilKitModel *attachmentModel;
@property (nonatomic, retain) PKCanvasView *canvas;
@property (nonatomic, retain) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attachment;
- (id)attachmentModel;
- (id)canvas;
- (void)canvasViewDidStartNewStroke:(id)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (id)closeButton;
- (void)done:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)viewDidLoad;

@end
