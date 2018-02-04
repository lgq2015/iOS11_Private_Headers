/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {
    struct { 
        unsigned int libraryId : 1; 
    }  _has;
    long long  _libraryId;
    NSString * _libraryName;
}

@property (nonatomic) bool hasLibraryId;
@property (nonatomic, readonly) bool hasLibraryName;
@property (nonatomic) long long libraryId;
@property (nonatomic, retain) NSString *libraryName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLibraryId;
- (bool)hasLibraryName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)libraryId;
- (id)libraryName;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLibraryId:(bool)arg1;
- (void)setLibraryId:(long long)arg1;
- (void)setLibraryName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
