/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopicalNode : NSObject <NSCopying> {
    NSSet * _children;
    NSSet * _displayedElements;
    double  _highestScoringRelativeScoreMultiplier;
    NSString * _identifier;
    NSSet * _identifiers;
    FCTopicalNode * _parent;
    double  _parentRawScore;
    double  _relatedness;
    double  _relatednessKWeight;
    double  _relatednessThreshold;
    double  _score;
    double  _scoreMultiplier;
    bool  _scored;
    double  _specificity;
    NSString * _storedNodeIdentifier;
    NSCountedSet * _topicCollections;
    double  _topicScoreWeight;
}

@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSSet *displayedElements;
@property (nonatomic) double highestScoringRelativeScoreMultiplier;
@property (retain) NSString *identifier;
@property (nonatomic, retain) NSSet *identifiers;
@property (nonatomic) FCTopicalNode *parent;
@property (nonatomic) double parentRawScore;
@property (nonatomic) double relatedness;
@property (nonatomic) double relatednessKWeight;
@property (nonatomic) double relatednessThreshold;
@property (nonatomic) double score;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) bool scored;
@property (nonatomic) double specificity;
@property (nonatomic, retain) NSString *storedNodeIdentifier;
@property (nonatomic, retain) NSCountedSet *topicCollections;
@property (nonatomic) double topicScoreWeight;

- (void).cxx_destruct;
- (id)calculateLeafScoresWithTopicScoreProvider:(id /* block */)arg1;
- (void)calculateNonLeafScoresWithTopicProvider:(id /* block */)arg1;
- (void)calculateScoreWithTopicScoreProvider:(id /* block */)arg1;
- (id)children;
- (long long)compare:(id)arg1;
- (void)considerEdge:(id)arg1 withNodeScorer:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayedElements;
- (double)highestScoringRelativeScoreMultiplier;
- (id)identifier;
- (id)identifiers;
- (double)individualScoreWithTopicScoreProvider:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 displayedElements:(id)arg2 allTopicCollections:(id)arg3 relatednessThreshold:(double)arg4 relatednessKWeight:(double)arg5 topicScoreWeight:(double)arg6 highestScoringRelativeScoreMultiplier:(double)arg7;
- (bool)isEqual:(id)arg1;
- (id)leaves;
- (id)parent;
- (double)parentRawScore;
- (double)relatedness;
- (double)relatednessKWeight;
- (double)relatednessThreshold;
- (double)score;
- (double)scoreMultiplier;
- (bool)scored;
- (void)setChildren:(id)arg1;
- (void)setDisplayedElements:(id)arg1;
- (void)setHighestScoringRelativeScoreMultiplier:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentRawScore:(double)arg1;
- (void)setRelatedness:(double)arg1;
- (void)setRelatednessKWeight:(double)arg1;
- (void)setRelatednessThreshold:(double)arg1;
- (void)setScore:(double)arg1;
- (void)setScoreMultiplier:(double)arg1;
- (void)setScored:(bool)arg1;
- (void)setSpecificity:(double)arg1;
- (void)setStoredNodeIdentifier:(id)arg1;
- (void)setTopicCollections:(id)arg1;
- (void)setTopicScoreWeight:(double)arg1;
- (double)specificity;
- (id)storedNodeIdentifier;
- (id)topicCollections;
- (double)topicScoreWeight;

@end
