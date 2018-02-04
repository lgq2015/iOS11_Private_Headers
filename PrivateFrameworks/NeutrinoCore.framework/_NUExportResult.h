/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUExportResult : _NURenderResult <NUExportResult> {
    NSURL * _destinationURL;
    NUImageGeometry * _geometry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURL *destinationURL;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)destinationURL;
- (id)geometry;
- (void)setDestinationURL:(id)arg1;
- (void)setGeometry:(id)arg1;

@end
