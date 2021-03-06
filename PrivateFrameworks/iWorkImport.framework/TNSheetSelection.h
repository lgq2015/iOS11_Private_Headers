/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNSheetSelection : TSKSelection {
    bool  mIsPaginated;
    TNSheet * mSheet;
}

@property (getter=isPaginated, nonatomic, readonly) bool paginated;
@property (nonatomic, readonly, retain) TNSheet *sheet;

+ (Class)archivedSelectionClass;
+ (id)selectionForSheet:(id)arg1 paginated:(bool)arg2;

- (id)UUIDDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSheet:(id)arg1 paginated:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPaginated;
- (id)sheet;

@end
