/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIAsset : NSObject <NSCopying> {
    struct __CFArray { } * _categories;
    NSMutableDictionary * _categoriesToPairedOwningCategories;
    NSArray * _contentStrings;
    struct __CFArray { } * _owningCategories;
    NSMutableDictionary * _synonymsByOriginalWord;
    NSString * _uuid;
}

@property (nonatomic, readonly, retain) struct __CFArray { }*categories;
@property (nonatomic, readonly, retain) NSArray *contentStrings;
@property (nonatomic, readonly, retain) struct __CFArray { }*owningCategories;
@property (setter=setUUID:, nonatomic, copy) NSString *uuid;

- (id)_initForCopy:(bool)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 categoryAndOwningCategoryArePaired:(bool)arg4;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (struct __CFArray { }*)categories;
- (void)clear;
- (id)contentStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (struct __CFArray { }*)owningCategories;
- (id)pairedCategoryForCategory:(short)arg1;
- (void)reverse;
- (void)setUUID:(id)arg1;
- (id)uuid;

@end
