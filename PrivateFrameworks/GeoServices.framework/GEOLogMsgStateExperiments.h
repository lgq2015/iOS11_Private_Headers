/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    GEOABClientConfig * _clientAbExperimentAssignment;
    GEOPDDatasetABStatus * _datasetAbStatus;
    GEOABExperimentAssignment * _tilesAbExperimentAssignment;
}

@property (nonatomic, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, retain) GEOABClientConfig *clientAbExperimentAssignment;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readonly) bool hasAbAssignInfo;
@property (nonatomic, readonly) bool hasClientAbExperimentAssignment;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasTilesAbExperimentAssignment;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;

- (void).cxx_destruct;
- (id)abAssignInfo;
- (id)clientAbExperimentAssignment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbAssignInfo;
- (bool)hasClientAbExperimentAssignment;
- (bool)hasDatasetAbStatus;
- (bool)hasTilesAbExperimentAssignment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbAssignInfo:(id)arg1;
- (void)setClientAbExperimentAssignment:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (id)tilesAbExperimentAssignment;
- (void)writeTo:(id)arg1;

@end
