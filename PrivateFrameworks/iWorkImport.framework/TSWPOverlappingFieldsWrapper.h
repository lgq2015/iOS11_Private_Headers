/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPOverlappingFieldsWrapper : NSObject {
    NSMutableArray * _fields;
    TSWPStorage * _parentStorage;
}

- (void).cxx_destruct;
- (void)addField:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fields;
- (id)findFieldWithTextAttributeUUIDString:(id)arg1;
- (bool)hasField:(id)arg1;
- (unsigned long long)indexOfField:(id)arg1;
- (id)initWithField:(id)arg1 parentStorage:(id)arg2;
- (id)initWithFields:(id)arg1 parentStorage:(id)arg2;
- (bool)isEqualToOverlappingFieldWrapper:(id)arg1;
- (bool)isEquivalentToObject:(id)arg1;
- (id)parentStorage;
- (void)removeField:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)sortWithContext:(void*)arg1;
- (unsigned long long)sortedSearchForIndexOfField:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end