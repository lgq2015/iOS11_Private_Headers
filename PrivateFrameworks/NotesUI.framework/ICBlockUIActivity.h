/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICBlockUIActivity : UIActivity {
    id /* block */  _block;
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id /* block */)block;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)image;
- (id)initWithTitle:(id)arg1 block:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(id /* block */)arg3;
- (void)performActivity;
- (void)setBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
