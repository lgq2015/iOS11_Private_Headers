/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    id /* block */  _multipleCompletion;
    id /* block */  _singleCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ multipleCompletion;
@property (nonatomic, copy) id /* block */ singleCompletion;
@property (readonly) Class superclass;

+ (void)_presentAddControllerFromViewController:(id)arg1 multiple:(bool)arg2 limit:(unsigned long long)arg3 completion:(id)arg4;
+ (id)_sharedInstance;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id /* block */)multipleCompletion;
- (void)setMultipleCompletion:(id /* block */)arg1;
- (void)setSingleCompletion:(id /* block */)arg1;
- (id /* block */)singleCompletion;

@end