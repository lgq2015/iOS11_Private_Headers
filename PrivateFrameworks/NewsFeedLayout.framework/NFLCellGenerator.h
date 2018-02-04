/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLCellGenerator : NSObject {
    Class  _headlineTemplateClass;
    NFLAbstractCellPropertyProvider * _propertyProvider;
    NFLAbstractRanker * _ranker;
    NFLAbstractCellSizer * _sizer;
}

@property (nonatomic) Class headlineTemplateClass;
@property (nonatomic, readonly) NFLAbstractCellPropertyProvider *propertyProvider;
@property (nonatomic, readonly) NFLAbstractRanker *ranker;
@property (nonatomic, readonly) NFLAbstractCellSizer *sizer;

- (void).cxx_destruct;
- (Class)headlineTemplateClass;
- (id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3;
- (id)propertyProvider;
- (id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(bool)arg4;
- (id)ranker;
- (void)setHeadlineTemplateClass:(Class)arg1;
- (id)sizer;

@end
