#ifndef __UniqueFile_H__
#define __UniqueFile_H__

class UniqueFile
{
    public:
        UniqueFile() = default;
        UniqueFile(const UniqueFile &) = delete;
        UniqueFile operator =(const UniqueFile &) = delete;
        UniqueFile(const char *) = delete;
        virtual ~UniqueFile() = default;
};

#endif