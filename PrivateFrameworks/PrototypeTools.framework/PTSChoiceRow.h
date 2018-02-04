/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSChoiceRow : PTSRow {
    NSArray * _possibleShortTitles;
    NSArray * _possibleTitles;
    NSArray * _possibleValues;
}

@property (nonatomic, copy) NSArray *possibleShortTitles;
@property (nonatomic, copy) NSArray *possibleTitles;
@property (nonatomic, copy) NSArray *possibleValues;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

- (void).cxx_destruct;
- (id)init;
- (id)possibleShortTitles;
- (id)possibleShortTitles:(id)arg1;
- (id)possibleTitles;
- (id)possibleValues;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
- (Class)rowTableViewCellClass;
- (void)setPossibleShortTitles:(id)arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setPossibleValues:(id)arg1;
- (void)updateWithRow:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)pu_possibleValues:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_possibleValues:(id)arg1;

@end
