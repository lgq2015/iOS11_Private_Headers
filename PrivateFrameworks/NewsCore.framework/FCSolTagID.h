/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolTagID : NSObject <NSCoding, NSCopying> {
    NSString * _identifier;
    bool  _isAutoFavorited;
    bool  _isFavorited;
    bool  _isGroupable;
    double  _specificity;
    unsigned long long  _whitelistLevel;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isAutoFavorited;
@property (nonatomic) bool isFavorited;
@property (nonatomic) bool isGroupable;
@property (nonatomic) double specificity;
@property (nonatomic) unsigned long long whitelistLevel;

+ (id)discardedOrphanID;
+ (id)orphanID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (id)initWithID:(id)arg1 subscibedTags:(id)arg2 autoFavoritedTags:(id)arg3 groupableTags:(id)arg4 whitelistLevel:(unsigned long long)arg5 rules:(id)arg6;
- (bool)isAutoFavorited;
- (bool)isEqual:(id)arg1;
- (bool)isFavorited;
- (bool)isGroupable;
- (void)setIdentifier:(id)arg1;
- (void)setIsAutoFavorited:(bool)arg1;
- (void)setIsFavorited:(bool)arg1;
- (void)setIsGroupable:(bool)arg1;
- (void)setSpecificity:(double)arg1;
- (void)setWhitelistLevel:(unsigned long long)arg1;
- (double)specificity;
- (unsigned long long)whitelistLevel;

@end
