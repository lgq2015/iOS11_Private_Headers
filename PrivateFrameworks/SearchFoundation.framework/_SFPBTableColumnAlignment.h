/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBTableColumnAlignment : PBCodable <NSSecureCoding, _SFPBTableColumnAlignment> {
    int  _columnAlignment;
    int  _dataAlignment;
    struct { 
        unsigned int columnAlignment : 1; 
        unsigned int dataAlignment : 1; 
        unsigned int isEqualWidth : 1; 
    }  _has;
    bool  _isEqualWidth;
}

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasColumnAlignment;
@property (nonatomic, readonly) bool hasDataAlignment;
@property (nonatomic, readonly) bool hasIsEqualWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEqualWidth;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (int)columnAlignment;
- (int)dataAlignment;
- (id)dictionaryRepresentation;
- (bool)hasColumnAlignment;
- (bool)hasDataAlignment;
- (bool)hasIsEqualWidth;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWidth;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setColumnAlignment:(int)arg1;
- (void)setDataAlignment:(int)arg1;
- (void)setIsEqualWidth:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
