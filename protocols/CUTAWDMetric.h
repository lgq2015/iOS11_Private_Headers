/* made by EzioChiu.
 */

@protocol CUTAWDMetric <CUTMetric>

@required

- (unsigned int)awdIdentifier;
- (PBCodable<NSCopying> *)awdRepresentation;

@end
