/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell {
    bool  _active;
    NTKEditOption * _editOption;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) NTKEditOption *editOption;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)active;
- (id)editOption;
- (id)initWithEditOption:(id)arg1;
- (double)rowHeight;
- (void)setActive:(bool)arg1;

@end
