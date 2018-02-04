/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PULibraryTabInfo : NSObject {
    int  _contentMode;
    NSString * _iconName;
    NSString * _labelKey;
}

@property (nonatomic) int contentMode;
@property (nonatomic, retain) NSString *iconName;
@property (nonatomic, retain) NSString *labelKey;

+ (id)_existingTabInfoForContentMode:(int)arg1;
+ (id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

- (void).cxx_destruct;
- (int)contentMode;
- (id)iconName;
- (id)labelKey;
- (void)setContentMode:(int)arg1;
- (void)setIconName:(id)arg1;
- (void)setLabelKey:(id)arg1;

@end
