/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {
    NSMutableArray * _formatArguments;
    NSMutableArray * _formatStrings;
    NSMutableArray * _separators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *formatArguments;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, retain) NSMutableArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *separators;
@property (nonatomic, retain) NSMutableArray *separators;
@property (readonly) Class superclass;

+ (Class)formatArgumentType;
+ (Class)formatStringType;
+ (Class)separatorType;

- (void).cxx_destruct;
- (void)addFormatArgument:(id)arg1;
- (void)addFormatString:(id)arg1;
- (void)addSeparator:(id)arg1;
- (void)clearFormatArguments;
- (void)clearFormatStrings;
- (void)clearSeparators;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatArgumentAtIndex:(unsigned long long)arg1;
- (id)formatArguments;
- (unsigned long long)formatArgumentsCount;
- (id)formatStringAtIndex:(unsigned long long)arg1;
- (id)formatStrings;
- (unsigned long long)formatStringsCount;
- (id)formatTokens;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)separatorAtIndex:(unsigned long long)arg1;
- (id)separators;
- (unsigned long long)separatorsCount;
- (void)setFormatArguments:(id)arg1;
- (void)setFormatStrings:(id)arg1;
- (void)setSeparators:(id)arg1;
- (void)writeTo:(id)arg1;

@end
