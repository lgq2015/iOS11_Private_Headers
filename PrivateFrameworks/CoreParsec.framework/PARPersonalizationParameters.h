/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARPersonalizationParameters : NSObject {
    PARRankerCentroidParameters * _centroidParameters;
    PARRankerUpdateModelParameters * _modelUpdateParameters;
    NSDictionary * _rankingAlgorithms;
    PARRankerSearchRequestParameters * _searchRequestParameters;
    PARURLToTopicsMaps * _urlToTopicsMap;
}

@property (nonatomic, retain) PARRankerCentroidParameters *centroidParameters;
@property (nonatomic, readonly) PARRankerUpdateModelParameters *modelUpdateParameters;
@property (nonatomic, retain) NSDictionary *rankingAlgorithms;
@property (nonatomic, retain) PARRankerSearchRequestParameters *searchRequestParameters;
@property (nonatomic, retain) PARURLToTopicsMaps *urlToTopicsMap;

+ (id)responseFromJSON:(id)arg1 includeURLTopics:(bool)arg2;

- (void).cxx_destruct;
- (id)centroidParameters;
- (id)modelUpdateParameters;
- (id)rankingAlgorithms;
- (id)searchRequestParameters;
- (void)setCentroidParameters:(id)arg1;
- (void)setRankingAlgorithms:(id)arg1;
- (void)setSearchRequestParameters:(id)arg1;
- (void)setUrlToTopicsMap:(id)arg1;
- (id)urlToTopicsMap;

@end
