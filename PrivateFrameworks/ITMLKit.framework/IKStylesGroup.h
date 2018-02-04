/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStylesGroup : NSObject {
    NSIndexSet * _groupIndexes;
    NSDictionary * _indexedSelectors;
    NSArray * _mediaQueryList;
    NSArray * _orderedStylesOrGroups;
}

@property (nonatomic, readonly, retain) NSIndexSet *groupIndexes;
@property (nonatomic, readonly, retain) NSDictionary *indexedSelectors;
@property (nonatomic, readonly, retain) NSArray *mediaQueryList;
@property (nonatomic, readonly, retain) NSArray *orderedStylesOrGroups;

+ (id)stylesGroupWithMarkup:(id)arg1 filterBlockedStyles:(bool)arg2;

- (void).cxx_destruct;
- (void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg1;
- (id)groupIndexes;
- (id)indexedSelectors;
- (id)initWithCSSRule:(id)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(bool)arg3;
- (id)initWithMarkup:(id)arg1 parseSubGroups:(bool)arg2 mediaQueryList:(id)arg3 filterBlockedStyles:(bool)arg4;
- (id)mediaQueryList;
- (id)orderedStylesOrGroups;

@end
