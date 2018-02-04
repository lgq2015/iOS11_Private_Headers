/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration> {
    NSMutableSet * _documentResourceInfos;
    NSMutableDictionary * _tagsToDocumentResourceInfosDictionary;
    NSMutableSet * _untaggedDocumentResourceInfos;
}

@property (nonatomic, readonly, copy) NSSet *allDocumentResourceInfos;
@property (nonatomic, readonly, copy) NSSet *allTags;
@property (nonatomic, readonly, copy) NSSet *untaggedDocumentResourceInfos;

- (void).cxx_destruct;
- (void)addDocumentResourceInfo:(id)arg1;
- (id)allDocumentResourceInfos;
- (id)allTags;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)minimumTagsWithPreferredTags:(id)arg1;
- (id)untaggedDocumentResourceInfos;

@end
