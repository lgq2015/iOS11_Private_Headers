/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColumnInfoCollection : EDSortedCollection {
    EDResources * mResources;
    EDWorksheet * mWorksheet;
}

- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;
- (id)columnInfoForColumnNumber:(int)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;

@end
