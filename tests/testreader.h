#ifndef TESTREADER_H
#define TESTREADER_H

#include <QObject>
#include <QtTest>

class TestReader : public QObject
{
    Q_OBJECT

public:
    TestReader();

private Q_SLOTS:
    void testReadToListInvalidArgs();
    void testReadToDataInvalidArgs();
    void testReadFileWithCommas();
    void testReadFileWithCommasToStringData();
    void testReadFileWithCommasToVariantData();
    void testReadFileWithSemicolons();
    void testReadFileWithSemicolonsToStringData();
    void testReadFileWithSemicolonsToVariantData();

private:
    QString getPathToFolderWithTestFiles() const;
    QString getPathToFileTestComma() const;
    QString getPathToFileTestSemicolon() const;
};

#endif // TESTREADER_H