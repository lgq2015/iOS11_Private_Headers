/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicItem : HLPHelpItem {
    NSString * _anchor;
    NSArray * _categories;
    NSString * _glossaryIdentifierString;
    NSString * _hrefID;
}

@property (nonatomic, copy) NSString *anchor;
@property (nonatomic, copy) NSArray *categories;
@property (getter=isCopyright, nonatomic, readonly) bool copyright;
@property (getter=isGlossary, nonatomic, readonly) bool glossary;
@property (nonatomic, copy) NSString *glossaryIdentifierString;
@property (nonatomic, copy) NSString *hrefID;
@property (getter=isPassionPoints, nonatomic, readonly) bool passionPoints;

- (void).cxx_destruct;
- (id)anchor;
- (id)categories;
- (bool)categoryContainKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)glossaryIdentifierString;
- (id)hrefID;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3;
- (bool)isCopyright;
- (bool)isGlossary;
- (bool)isPassionPoints;
- (void)setAnchor:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setGlossaryIdentifierString:(id)arg1;
- (void)setHrefID:(id)arg1;

@end
