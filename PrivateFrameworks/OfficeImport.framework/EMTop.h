/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMTop : CMTop <OIProgressiveReaderDelegate> {
    CMArchiveManager * _archiver;
    NSString * _inFileName;
    EMWorkbookMapper * _mapper;
    EMState * _state;
    bool  _xml;
}

+ (void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;

- (void).cxx_destruct;
- (void)_streamWorkbook:(id)arg1;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 orData:(id)arg2 withDataFileName:(id)arg3 xmlFlag:(bool)arg4 archiver:(id)arg5;
- (void)readFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;

@end
