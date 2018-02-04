/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    double  _alternativeButlerWidgetConfigPopulationCeiling;
    double  _alternativeButlerWidgetConfigPopulationFloor;
    long long  _articleListBackgroundMinimumUpdateInterval;
    long long  _articleListForegroundMinimumUpdateInterval;
    long long  _backgroundMinimumUpdateInterval;
    unsigned int  _enabledSections;
    long long  _forYouBackgroundMinimumUpdateInterval;
    long long  _forYouCutoffTime;
    long long  _forYouForegroundMinimumUpdateInterval;
    long long  _foregroundMinimumUpdateInterval;
    struct { 
        unsigned int alternativeButlerWidgetConfigPopulationCeiling : 1; 
        unsigned int alternativeButlerWidgetConfigPopulationFloor : 1; 
        unsigned int articleListBackgroundMinimumUpdateInterval : 1; 
        unsigned int articleListForegroundMinimumUpdateInterval : 1; 
        unsigned int backgroundMinimumUpdateInterval : 1; 
        unsigned int forYouBackgroundMinimumUpdateInterval : 1; 
        unsigned int forYouCutoffTime : 1; 
        unsigned int forYouForegroundMinimumUpdateInterval : 1; 
        unsigned int foregroundMinimumUpdateInterval : 1; 
        unsigned int minimumArticleExposureDurationToBePreseen : 1; 
        unsigned int parsecPopulationCeiling : 1; 
        unsigned int parsecPopulationFloor : 1; 
        unsigned int parsecTrendingCutoffTime : 1; 
        unsigned int topStoriesBackgroundMinimumUpdateInterval : 1; 
        unsigned int topStoriesCutoffTime : 1; 
        unsigned int topStoriesForegroundMinimumUpdateInterval : 1; 
        unsigned int trendingBackgroundMinimumUpdateInterval : 1; 
        unsigned int trendingByParsecBackgroundMinimumUpdateInterval : 1; 
        unsigned int trendingByParsecForegroundMinimumUpdateInterval : 1; 
        unsigned int trendingCutoffTime : 1; 
        unsigned int trendingForegroundMinimumUpdateInterval : 1; 
        unsigned int widgetSectionConfigBackgroundMinimumUpdateInterval : 1; 
        unsigned int widgetSectionConfigForegroundMinimumUpdateInterval : 1; 
        unsigned int enabledSections : 1; 
        unsigned int minimumNumberOfTimesPreseenToBeSeen : 1; 
    }  _has;
    NSString * _identifier;
    long long  _minimumArticleExposureDurationToBePreseen;
    unsigned int  _minimumNumberOfTimesPreseenToBeSeen;
    double  _parsecPopulationCeiling;
    double  _parsecPopulationFloor;
    long long  _parsecTrendingCutoffTime;
    long long  _topStoriesBackgroundMinimumUpdateInterval;
    long long  _topStoriesCutoffTime;
    long long  _topStoriesForegroundMinimumUpdateInterval;
    long long  _trendingBackgroundMinimumUpdateInterval;
    long long  _trendingByParsecBackgroundMinimumUpdateInterval;
    long long  _trendingByParsecForegroundMinimumUpdateInterval;
    long long  _trendingCutoffTime;
    long long  _trendingForegroundMinimumUpdateInterval;
    long long  _widgetSectionConfigBackgroundMinimumUpdateInterval;
    long long  _widgetSectionConfigForegroundMinimumUpdateInterval;
}

@property (nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic) long long backgroundMinimumUpdateInterval;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic) long long foregroundMinimumUpdateInterval;
@property (nonatomic) bool hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) bool hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) bool hasArticleListBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasArticleListForegroundMinimumUpdateInterval;
@property (nonatomic) bool hasBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasEnabledSections;
@property (nonatomic) bool hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasForYouCutoffTime;
@property (nonatomic) bool hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) bool hasForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) bool hasParsecPopulationCeiling;
@property (nonatomic) bool hasParsecPopulationFloor;
@property (nonatomic) bool hasParsecTrendingCutoffTime;
@property (nonatomic) bool hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasTopStoriesCutoffTime;
@property (nonatomic) bool hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) bool hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasTrendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) bool hasTrendingCutoffTime;
@property (nonatomic) bool hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic) bool hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) bool hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) long long parsecTrendingCutoffTime;
@property (nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) long long topStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingCutoffTime;
@property (nonatomic) long long trendingForegroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval;

- (void).cxx_destruct;
- (double)alternativeButlerWidgetConfigPopulationCeiling;
- (double)alternativeButlerWidgetConfigPopulationFloor;
- (long long)articleListBackgroundMinimumUpdateInterval;
- (long long)articleListForegroundMinimumUpdateInterval;
- (long long)backgroundMinimumUpdateInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabledSections;
- (long long)forYouBackgroundMinimumUpdateInterval;
- (long long)forYouCutoffTime;
- (long long)forYouForegroundMinimumUpdateInterval;
- (long long)foregroundMinimumUpdateInterval;
- (bool)hasAlternativeButlerWidgetConfigPopulationCeiling;
- (bool)hasAlternativeButlerWidgetConfigPopulationFloor;
- (bool)hasArticleListBackgroundMinimumUpdateInterval;
- (bool)hasArticleListForegroundMinimumUpdateInterval;
- (bool)hasBackgroundMinimumUpdateInterval;
- (bool)hasEnabledSections;
- (bool)hasForYouBackgroundMinimumUpdateInterval;
- (bool)hasForYouCutoffTime;
- (bool)hasForYouForegroundMinimumUpdateInterval;
- (bool)hasForegroundMinimumUpdateInterval;
- (bool)hasIdentifier;
- (bool)hasMinimumArticleExposureDurationToBePreseen;
- (bool)hasMinimumNumberOfTimesPreseenToBeSeen;
- (bool)hasParsecPopulationCeiling;
- (bool)hasParsecPopulationFloor;
- (bool)hasParsecTrendingCutoffTime;
- (bool)hasTopStoriesBackgroundMinimumUpdateInterval;
- (bool)hasTopStoriesCutoffTime;
- (bool)hasTopStoriesForegroundMinimumUpdateInterval;
- (bool)hasTrendingBackgroundMinimumUpdateInterval;
- (bool)hasTrendingByParsecBackgroundMinimumUpdateInterval;
- (bool)hasTrendingByParsecForegroundMinimumUpdateInterval;
- (bool)hasTrendingCutoffTime;
- (bool)hasTrendingForegroundMinimumUpdateInterval;
- (bool)hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
- (bool)hasWidgetSectionConfigForegroundMinimumUpdateInterval;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleExposureDurationToBePreseen;
- (unsigned int)minimumNumberOfTimesPreseenToBeSeen;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (long long)parsecTrendingCutoffTime;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeButlerWidgetConfigPopulationCeiling:(double)arg1;
- (void)setAlternativeButlerWidgetConfigPopulationFloor:(double)arg1;
- (void)setArticleListBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setArticleListForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setEnabledSections:(unsigned int)arg1;
- (void)setForYouBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setForYouCutoffTime:(long long)arg1;
- (void)setForYouForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setHasAlternativeButlerWidgetConfigPopulationCeiling:(bool)arg1;
- (void)setHasAlternativeButlerWidgetConfigPopulationFloor:(bool)arg1;
- (void)setHasArticleListBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasArticleListForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasEnabledSections:(bool)arg1;
- (void)setHasForYouBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasForYouCutoffTime:(bool)arg1;
- (void)setHasForYouForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasMinimumArticleExposureDurationToBePreseen:(bool)arg1;
- (void)setHasMinimumNumberOfTimesPreseenToBeSeen:(bool)arg1;
- (void)setHasParsecPopulationCeiling:(bool)arg1;
- (void)setHasParsecPopulationFloor:(bool)arg1;
- (void)setHasParsecTrendingCutoffTime:(bool)arg1;
- (void)setHasTopStoriesBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasTopStoriesCutoffTime:(bool)arg1;
- (void)setHasTopStoriesForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasTrendingBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasTrendingByParsecBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasTrendingByParsecForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasTrendingCutoffTime:(bool)arg1;
- (void)setHasTrendingForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasWidgetSectionConfigBackgroundMinimumUpdateInterval:(bool)arg1;
- (void)setHasWidgetSectionConfigForegroundMinimumUpdateInterval:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1;
- (void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned int)arg1;
- (void)setParsecPopulationCeiling:(double)arg1;
- (void)setParsecPopulationFloor:(double)arg1;
- (void)setParsecTrendingCutoffTime:(long long)arg1;
- (void)setTopStoriesBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setTopStoriesCutoffTime:(long long)arg1;
- (void)setTopStoriesForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingByParsecBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingByParsecForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingCutoffTime:(long long)arg1;
- (void)setTrendingForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setWidgetSectionConfigBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setWidgetSectionConfigForegroundMinimumUpdateInterval:(long long)arg1;
- (long long)topStoriesBackgroundMinimumUpdateInterval;
- (long long)topStoriesCutoffTime;
- (long long)topStoriesForegroundMinimumUpdateInterval;
- (long long)trendingBackgroundMinimumUpdateInterval;
- (long long)trendingByParsecBackgroundMinimumUpdateInterval;
- (long long)trendingByParsecForegroundMinimumUpdateInterval;
- (long long)trendingCutoffTime;
- (long long)trendingForegroundMinimumUpdateInterval;
- (long long)widgetSectionConfigBackgroundMinimumUpdateInterval;
- (long long)widgetSectionConfigForegroundMinimumUpdateInterval;
- (void)writeTo:(id)arg1;

@end
