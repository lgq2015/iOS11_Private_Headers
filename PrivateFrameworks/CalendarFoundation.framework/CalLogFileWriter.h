/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogFileWriter : CalLogWriter {
    int  _fileDescriptor;
    bool  _fileDescriptorIsValid;
    NSString * _path;
}

@property (nonatomic) int fileDescriptor;
@property (nonatomic) bool fileDescriptorIsValid;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (int)fileDescriptor;
- (bool)fileDescriptorIsValid;
- (id)initWithParameters:(id)arg1;
- (id)path;
- (void)setFileDescriptor:(int)arg1;
- (void)setFileDescriptorIsValid:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)write:(id)arg1;

@end
